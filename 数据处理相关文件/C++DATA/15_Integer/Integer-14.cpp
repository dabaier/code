#include<iostream>
using namespace std;
int main()
{
int num,count=0;
cin>>num;
while(num!=0)
{
	count++;
	cout<<num%10<<" ";
	num/=10;
}


return 0;

}


