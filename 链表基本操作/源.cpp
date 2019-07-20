#include<iostream>
#include<cstdlib>
using namespace std;

template<class T>
class Node{
private:
	Node<T>*next;
public:
	T date;

	Node(const T&date,Node<T>*next=0);
	void insertAfter(Node<T>*p);
	Node<T>*deleteAfter();
	Node<T>*nextNode();
	const Node<T>*nextNode() const;
};
template<class T>
Node<T>::Node(const T&date,Node<T>*next):
	date(date),next(next){}

template<class T>
Node<T>*Node<T>::nextNode(){
	return next;
}

template<class T>
const Node<T>*Node<T>::nextNode()const{
	return next;
}

template<class T>
void Node<T>::insertAfter(Node<T>*p){
	p->next=next;
	next=p;
}

template<class T>
Node<T>*Node<T>::deleteAfter(){
	Node<T>*temp=next;
	if(next==0)
		return 0;
	next=temp->next;
	return temp;
}

template<class T>
Node<T>*GetNode(const T&item,Node<T>*nextPtr=0)
{
	Node<T> *newNode;
	newNode=new Node<T>(item,nextPtr);
	if(newNode==0)
	{
		cout<<"Merry allocation failure!"<<endl;
		exit(1);
	}
	return newNode;
}

enum AppendNewline{noNewline,addNewline};
template<class T>
void PrintList(Node<T>*head,AppendNewline addnl=noNewline)
{
	Node<T>*currPtr=head;
	while(currPtr!=NULL)
	{
		if(addnl==addNewline)
			cout<<currPtr->date<<endl;
		else
			cout<<currPtr->date<<" ";
		currPtr=currPtr->nextNode();
	}
	cout<<endl;
}
template<class T>
int Find(Node<T>*head,T& item,Node<T>*&prevPtr)
{
	Node<T>*currPtr=head;
	prevPtr=NULL;
	while(currPtr!=NULL)
	{
		if(currPtr->date==item)
		return 1;
	    prevPtr=currPtr;
	    currPtr=currPtr->nextNode();
	}
	return 0;
}

template<class T>
void InsertFront(Node<T>*&head,T item)
{
	head=GetNode(item,head);
}

template<class T>
void InsertRear(Node<T>*&head,const T&item)
{
	Node<T>*newNode,*currPtr=head;
	if(currPtr==NULL)
		InsertFront(head,item);
	else
	{
		while(currPtr->nextNode()!=NULL)
			currPtr=currPtr->nextNode();
		newNode=GetNode(item);
		currPtr->insertAfter(newNode);
	}
}

template<class T>
void DeleteFrot(Node<T>*&head)
{
	Node<T>*p=head;
	if(head!=NULL)
	{
		head=head->nextNode();
		delete p;
	}
}

template <class T>
void Delet(Node<T>*&head,T key)
{
	Node<T>*currPtr=head,*prevPtr=NULL;
	if(currPtr==NULL)
		return;
	while(currPtr!=NULL&&currPtr->date!=key)
	{
		prevPtr=currPtr;
		currPtr=currPtr->nextNode();
	}
	if(currPtr!=NULL)
	{
		if(prevPtr==NULL)
			head=head->nextNode();
		else
			prevPtr->deleteAfter();
		delete currPtr;
	}
}


//template<class T>
//void InsertOrder(Node<T>*&head,T item)
//{
	//Node<T>*currPtr,*prevPte,*newNode;
	//prevPte=NULL;
	//currPtr=head;
	//while(currPtr!=NULL)
	//{
		//if(item<currPtr->date)
			//break;
int main()
{
	Node<int>*head=NULL,*prevPtr,*delPtr;
	int i,key,item[10];
	for(i=0;i<10;i++)
	{
		cin>>item[i];
	}
	for(i=0;i<10;i++)
	{
		InsertFront(head,item[9-i]);
	}
	PrintList(head,noNewline);
	cin>>key;
	while(Find(head,key,prevPtr)!=NULL)
	{
		if(prevPtr==NULL)
			head=head->nextNode();
		else
			delPtr=prevPtr->deleteAfter();
		delete delPtr;
	}
	PrintList(head);
	system("pause");
	return 0;
}

