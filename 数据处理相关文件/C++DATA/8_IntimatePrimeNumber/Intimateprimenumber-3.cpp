#include<iostream>
using namespace std;
int zy(int n)
{
	int i=2;
   for(;i<n;i++)
   {
   	if(n%i==0) 
	{

   	break;
	}
   }
    return i;
 } 
 
 int  main() 
{ 
        int a,r,s; 
        cin>>a;
		 for(r=3,s=5;r<=a-2&&s<=a;r=r+2,s=s+2)
		 {
		 	if(zy(r)+2==zy(s))
		 	cout<<r<<" "<<s<<endl;
		 }
        return  0; 
} 
