#include<iostream>
using namespace std;
struct time
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
};
int main()
{
	time date;
	cin>>date.year>>date.month>>date.day>>date.hour>>date.minute>>date.second;
	cout<<date.year<<"  "<<date.month<<"  "<<date.day<<"  "<<date.hour<<"  "<<date.minute<<"  "<<date.second<<endl;
	int i;
	cin>>i;
	return 0;
}
