#ifndef NODE_CLASS

#define NODE_CLASS

template <class T>

class Node

{

    private:

        Node<T> *next;  //指向后继节点的指针

    public:

        T data;  //数据域

        Node (const T& item, Node<T>* ptrnext = NULL);

        void InsertAfter(Node<T> *p);

        Node<T> *DeleteAfter(void);

        Node<T> *NextNode(void) const;

};

template <class T>

Node<T>::Node(const T& item, Node<T>* ptrnext) :

        data(item), next(ptrnext)

{} 

template <class T>

Node<T> *Node<T>::NextNode(void) const

{

    return next;

}

template <class T>

void Node<T>::InsertAfter(Node<T> *p)

{

    p->next = next;     //p节点指针域指向当前节点的后继节点

    next = p;           //当前节点的指针域指向p

}

template <class T>

Node<T> *Node<T>::DeleteAfter(void)

{

Node<T> *tempPtr = next;  //将欲删除的节点地址存储到tempPtr中

 

    if (next == NULL)  //如果当前节点没有后继节点，则返回NULL

        return NULL;   

    next = tempPtr->next;  //使当前节点的指针域指向tempPtr的后继节点

    return tempPtr;   //返回被删除的节点的地址

}

#endif  // NODE_CLASS