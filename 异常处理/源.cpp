#include<iostream>
using namespace std;

class Exception{
public:
	virtual void disp()=0;
};

class OutOfMemory:public Exception{
public:
	OutOfMemory(){}
	~OutOfMemory(){}
	virtual void disp();
};

void OutOfMemory::disp()
{
	cout<<"Out Of Memory!"<<endl;
}

class RangeError:public Exception{
private:
	long BadNum;
public:
	RangeError(long number){BadNum=number;}
	~RangeError(){};
	virtual void disp();
	virtual long GetNumber(){return BadNum;}
	virtual void SetNummber(long number){BadNum=number;}
};

void RangeError::disp(){
	cout<<"Number Out Of Range!"<<endl;
}

int main()
{
	int i,j,k,n;
	try{
		OutOfMemory p1;
		RangeError p2(0);
		cin>>n>>k;
		if(n>10000)
			throw p1;
		int*s=new int[n];
		for(i=0;i<k;i++)
		{
			cin>>j;
			if(j<0||j>=n)
				throw p2;
		}
	}catch(OutOfMemory&p1)
	{
		p1.disp();
	}catch(RangeError&p2)
	{
		p2.disp();
	}
	system("pause");
	return 0;
}

