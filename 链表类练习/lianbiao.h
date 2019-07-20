#ifndef NODE_LIBRARY

#define NODE_LIBRARY

#include <iostream>

#include <cstdlib>

#include"Node.h"

using namespace std;

template <class T>

Node<T> *GetNode(const T& item, Node<T> *nextPtr = NULL)

{

    Node<T>  *newNode;

    newNode = new Node<T>(item, nextPtr);

    if (newNode == NULL)  //��������ڴ�ʧ�ܣ�������ֹ

    {

        cerr << "Memory allocation failure!" << endl;

        exit(1);

    }

    return newNode;

}

enum AppendNewline {noNewline,addNewline};

template <class T>

void PrintList(Node<T> *head, AppendNewline addnl = noNewline)

{

    Node<T> *currPtr = head;

    while(currPtr != NULL)

    {

        if(addnl == addNewline)

            cout << currPtr->data << endl;

        else

            cout << currPtr->data << "  ";  

        currPtr = currPtr->NextNode();

    }

}

template <class T>

int Find(Node<T> *head, T& item, Node<T>* &prevPtr)

{

      Node<T> *currPtr = head;   //�ӵ�һ����㿪ʼ����

      prevPtr = NULL;

      while(currPtr != NULL)

      {

            if (currPtr->data == item)

                 return 1;

            prevPtr = currPtr;   //��¼�µ�ǰ���ĵ�ַ

            currPtr = currPtr->NextNode();

      }

      return 0;  //�Ҳ���ʱ

}

template <class T>

void InsertFront(Node<T>* & head, T item)

{

    head = GetNode(item,head);

}

template <class T>

void InsertRear(Node<T>* & head, const T& item)

{

    Node<T>  *newNode, *currPtr = head;

    if (currPtr == NULL)

        InsertFront(head,item);

    else

    {

      while(currPtr->NextNode() != NULL)

          currPtr = currPtr->NextNode();

      newNode = GetNode(item);

      currPtr->InsertAfter(newNode);

    }

}              

template <class T>

void DeleteFront(Node<T>* & head)

{

    Node<T> *p = head;   //ȡ�ý���ɾ���Ľ��ĵ�ַ

    if (head != NULL)    // ȷ��������

    {

        head = head->NextNode();    // ����ͷָ��head����ڶ������

        delete p;   //ɾ��ԭ��һ�����

    }

}

template <class T>

void Delete (Node<T>* & head, T key)

{

   Node<T>  *currPtr = head, *prevPtr = NULL;

   if (currPtr == NULL)

      return;    

   while (currPtr != NULL && currPtr->data != key)

   {

      // currPtrǰ�У�prevPtr�������

      prevPtr = currPtr;

      currPtr = currPtr->NextNode();

   }

   if (currPtr != NULL)

   {

      if(prevPtr == NULL)  //�ҵ����������һ�����

         head = head->NextNode();

      else

         prevPtr->DeleteAfter();

      delete currPtr;   //�ͷű�ɾ���Ľ����ռ���ڴ�ռ�

   }

}

template <class T>

void InsertOrder(Node<T>* & head, T item)

{

    Node<T> *currPtr, *prevPtr, *newNode; 

    prevPtr = NULL;

    currPtr = head;

    while (currPtr != NULL)

    {

      if (item < currPtr->data)

            break;      

      // currPtrǰ�У�prevPtr�������

        prevPtr = currPtr;

        currPtr = currPtr->NextNode();

    }  

    if (prevPtr == NULL)  //���������ڱ�ͷ

        InsertFront(head,item);

    else

    {

        newNode = GetNode(item);

        prevPtr->InsertAfter(newNode);

    }

}

template <class T>

void ClearList(Node<T> * &head)

{

    Node<T> *currPtr, *nextPtr;

    currPtr = head;

    while(currPtr != NULL)

    {

        nextPtr = currPtr->NextNode();

        delete currPtr;

        currPtr = nextPtr;  //ʹָ��currPtrָ����һ�����

    }

 

    head = NULL;   //��ͷ�����ΪNULL����־������Ϊ��

}

#endif  // NODE_LIBRARY
