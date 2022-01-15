#include<iostream>
using namespace std;
int main()
{
int x,y;
cin>>x;
if(x<1)
{
	y=x;
}
else{ if(x>=1&&x<10)
{
	y=2*x-2;
}
else
{
	y=3*x-11;
}}
cout<<y<<endl;
return 0;




}
