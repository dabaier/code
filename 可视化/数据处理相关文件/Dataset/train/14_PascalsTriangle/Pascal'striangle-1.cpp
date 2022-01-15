#include<iostream>
using namespace std;
void coefficient(int a)
{
	int i=1,mul=1,c=a;
	cout<<1<<"***";
	for(;i<=c-1,a>=2;i++,a--)
	{
		mul=mul*a/i;
		cout<<mul<<"***";
	}
	cout<<1;
	cout<<endl;
 } 
 void star(int x)
 {
 	int i=2*x-2;
 	for(;i>0;i--)
 	{
 		cout<<'*';
	 }
 }
 int main()
 {
 	int n;
 	cin>>n;
 	if(n==1) cout<<"**"<<1<<endl<<1<<"***"<<1;
 	if(n>=2)
 	{
 		star(n+1);
 		cout<<1<<endl;
 		for(int i=1;i<n,n>0;i++,n--)
 	   {
	    star(n);
		coefficient(i);	
	   }
 }
	 }
 	


