#include<iostream>
#include<stdexcept>
using namespace std;

template<class T>
class Array{
private:
	T*list;
	int size;
public:
	Array(int sz=10);
	~Array(){};
	T& operator[](int n)const;
	int getSize() const;
};

template<class T>
Array<T>::Array(int sz)
{
	size=sz;
	list=new T [sz];
}

template<class T>
T& Array<T>::operator[](int n)const{
	if(n>=0&&n<size)
		return list[n];
	else
	{
		throw out_of_range("invalid position");
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	Array<int>a(n);
	for(int i=0;i<k;i++)
	{
	try{    int p;
			cin>>p;
			a[p];
		}
		catch(exception &e){
			cout<<e.what()<<endl;
		}
	}
	system("pause");
	return 0;
}

