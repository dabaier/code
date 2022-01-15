#include<iostream>
using namespace std;
int main()
{
	int a,i,r,s,p;
    cin>>a;
    for(i=1;i<=a;i++)
    {
    	for(r=0;r<i;r++)
    	{
    	cout<<"0";
        }
    	cout<<endl;
	}
	for(p=1;p<a;p++)
	{
		for(s=0;s<=a-1-p;s++)
		{
			cout<<"0";
		}
	     cout<<endl;	
	}
	return 0;
} 


