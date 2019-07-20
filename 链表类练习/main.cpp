#include <iostream>

#include "lianbiao.h"

#include"Node.h"

using namespace std;

int main()

{

    Node<int> *head = NULL, *prevPtr, *delPtr;  

    int i, key, item;

    for (i=0;i < 10;i++)

      {

       cout<<"please input " <<i+1<<" number To insert a header :"<<endl;

          cin>>item;

           InsertFront(head, item);

      }      

    cout << "List: ";

    PrintList(head,noNewline);

    cout << endl;  

    cout << "请输入一个需要删除的整数: ";

    cin >> key;  

    prevPtr = head;

    while (Find(head,key,prevPtr) != NULL)

      {

        if(prevPtr == NULL)  //找到的是链表第一个结点

         head = head->NextNode();

      else

         delPtr=prevPtr->DeleteAfter();

      delete delPtr; 

      }     

    cout << "List: ";

    PrintList(head,noNewline);

    cout << endl;

    ClearList(head);

}