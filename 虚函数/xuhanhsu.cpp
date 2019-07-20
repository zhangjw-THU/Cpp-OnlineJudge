#include<iostream>
using namespace std;

class vehicle{
public:
	virtual void Run(){
		cout<<"vehicle run"<<endl;
	}
	virtual void Stop(){
		cout<<"vehicle stop"<<endl;
	}
};

class bicycle:public vehicle{
public:
	void Run(){
		cout<<"bicycle run"<<endl;
	}
	void Stop(){
		cout<<"bicycle stop"<<endl;
	}
};

class motorcar:public vehicle{
public:
	void Run(){
		cout<<"motorcar run"<<endl;
	}
	void Stop(){
		cout<<"motorcar stop"<<endl;
	}
};

class motorcycle:public bicycle,public motorcar{
public:
	void Run(){
		cout<<"motorcycle run"<<endl;
	}
	void Stop(){
		cout<<"motorcycle stop"<<endl;
	}
};

int main()
{
	vehicle a;
	bicycle b;
	motorcar c;
	motorcycle d;
	a.Run();
	a.Stop();
	b.Run();
	b.Stop();
	c.Run();
	c.Stop();
	d.Run();
	d.Stop();
	system("pause");
	return 0;
}