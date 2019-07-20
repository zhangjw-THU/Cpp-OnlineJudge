#ifndef NODE_CLASS

#define NODE_CLASS

template <class T>

class Node

{

    private:

        Node<T> *next;  //ָ���̽ڵ��ָ��

    public:

        T data;  //������

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

    p->next = next;     //p�ڵ�ָ����ָ��ǰ�ڵ�ĺ�̽ڵ�

    next = p;           //��ǰ�ڵ��ָ����ָ��p

}

template <class T>

Node<T> *Node<T>::DeleteAfter(void)

{

Node<T> *tempPtr = next;  //����ɾ���Ľڵ��ַ�洢��tempPtr��

 

    if (next == NULL)  //�����ǰ�ڵ�û�к�̽ڵ㣬�򷵻�NULL

        return NULL;   

    next = tempPtr->next;  //ʹ��ǰ�ڵ��ָ����ָ��tempPtr�ĺ�̽ڵ�

    return tempPtr;   //���ر�ɾ���Ľڵ�ĵ�ַ

}

#endif  // NODE_CLASS