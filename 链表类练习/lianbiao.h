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

    if (newNode == NULL)  //如果分配内存失败，程序中止

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

      Node<T> *currPtr = head;   //从第一个结点开始遍历

      prevPtr = NULL;

      while(currPtr != NULL)

      {

            if (currPtr->data == item)

                 return 1;

            prevPtr = currPtr;   //记录下当前结点的地址

            currPtr = currPtr->NextNode();

      }

      return 0;  //找不到时

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

    Node<T> *p = head;   //取得将被删除的结点的地址

    if (head != NULL)    // 确认链表不空

    {

        head = head->NextNode();    // 将表头指针head移向第二个结点

        delete p;   //删除原第一个结点

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

      // currPtr前行，prevPtr跟随其后

      prevPtr = currPtr;

      currPtr = currPtr->NextNode();

   }

   if (currPtr != NULL)

   {

      if(prevPtr == NULL)  //找到的是链表第一个结点

         head = head->NextNode();

      else

         prevPtr->DeleteAfter();

      delete currPtr;   //释放被删除的结点所占的内存空间

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

      // currPtr前行，prevPtr跟随其后

        prevPtr = currPtr;

        currPtr = currPtr->NextNode();

    }  

    if (prevPtr == NULL)  //如果插入点在表头

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

        currPtr = nextPtr;  //使指针currPtr指向下一个结点

    }

 

    head = NULL;   //将头结点置为NULL，标志着链表为空

}

#endif  // NODE_LIBRARY
