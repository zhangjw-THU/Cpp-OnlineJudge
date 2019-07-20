#include<iostream>
#include<stdint.h>
using namespace std;
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
class CPU
{
private:
	CPU_Rank rank;
	int frequence;
	float voltage;
public:
	CPU(int nrank,int nfrequence,float nvoltage);
	~CPU(){cout<<"CPU Destroy";}
	void run();
	void stop();
};
CPU::CPU(int nrank,int nfrequence,float nvoltage)
{
	rank=(CPU_Rank)nrank;
	frequence=nfrequence;
	voltage=nvoltage;
	cout<<"CPU Construct"<<endl;
};
void CPU::run()
{
	cout<<"CPU RUN"<<endl;
	cout<<"CPU rank£º ";
	switch(rank)
	{
	case 1:cout<<"P1";break;
	case 2:cout<<"P2";break;
	case 3:cout<<"P3";break;
	case 4:cout<<"P4";break;
	case 5:cout<<"P5";break;
	case 6:cout<<"P6";break;
	case 7:cout<<"P7";break;
	}
	cout<<endl;
	cout<<"CPU frequence£º "<<frequence<<" MHz"<<endl;
	cout<<"CPU voltage£º ";
	printf("%.2f V\n",voltage);
}
void CPU::stop()
{
	cout<<"CPU STOP"<<endl;
};
int main()
{
	int r,f;
	float v;
	cin>>r>>f>>v;
	CPU cpu(r,f,v);
	cpu.run();
	cpu.stop();
	//system("pause");
	return 0;
}




