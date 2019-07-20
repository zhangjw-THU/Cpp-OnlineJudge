#include<iostream>
#include<iomanip>
using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};

class CPU{
public:
	CPU(CPU_Rank rank,int freq,double volt);
	void Run();
	void Stop();
	~CPU(){cout<<"CPU Destroy"<<endl;}
private:
	CPU_Rank ran;
	int fre;
	double vol;
};
CPU::CPU(CPU_Rank rank,int freq,double volt){
	cout<<"CPU Construct"<<endl;
	ran=rank;
	fre=freq;
	vol=volt;
}
void CPU::Run(){
	cout<<"CPU RUN"<<endl<<"CPU rank£º ";
	switch(ran){
	case 1:{
		cout<<"P1"<<endl;break;}
	case 2:{
		cout<<"P2"<<endl;break;}
	case 3:{
		cout<<"P3"<<endl;break;}
	case 4:{
		cout<<"P4"<<endl;break;}
	case 5:{
		cout<<"P5"<<endl;break;}
	case 6:{
		cout<<"P6"<<endl;break;}
	case 7:{
		cout<<"P7"<<endl;}}
	cout<<"CPU frequency£º "<<fre<<" MHz"<<endl;
	cout<<"CPU voltage£º "<<setiosflags(ios_base::fixed)<<setprecision(2)<<vol<<" V"<<endl;
}
void CPU::Stop(){
	cout<<"CPU STOP"<<endl;
}

int main(){
	int i,j;
	double k;
	CPU_Rank l;
	cin>>i>>j>>k;
	l=CPU_Rank(i);
	CPU cpu(l,j,k);
	cpu.Run();
	cpu.Stop();
	return 0;
}