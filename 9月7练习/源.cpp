#include<iostream>
#include<cstdlib>
using namespace std;

template<class T>
class Node{
//private:
//	Node<T>*next;
public:
	T date;
	Node<T>*next;
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

template<class T>
Node<T>* Link(Node<T>*head1,Node<T>*head2)
{
	Node<T>*currPre,*prevPtr=NULL,*p1,*p2;
	p1=head1;
	p2=head2;
	currPre=head1;
	while(currPre!=NULL)
	{
		prevPtr=currPre;
		currPre=currPre->nextNode();
	}
	prevPtr->next=p2;
	return p1;
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
	Node<int>*head1=NULL,*head2=NULL,*prevPtr,*delPtr;
	int i,key,item[5];
	for(i=0;i<5;i++)
	{
		cin>>item[i];
	}
	for(i=0;i<5;i++)
	{
		InsertFront(head1,item[4-i]);
	}
	//PrintList(head1,noNewline);
	for(i=0;i<5;i++)
	{
		cin>>item[i];
	}
	for(i=0;i<5;i++)
	{
		InsertFront(head2,item[4-i]);
	}
	//PrintList(head2,noNewline);
	head1=Link(head1,head2);
	PrintList(head1,noNewline);
	//while(Find(head,key,prevPtr)!=NULL)
	{
		//if(prevPtr==NULL)
			//head=head->nextNode();
		//else
			//delPtr=prevPtr->deleteAfter();
	//	delete delPtr;
	}
	//PrintList(head);
	system("pause");
	return 0;
}

