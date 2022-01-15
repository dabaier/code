#include<iostream>
using namespace std;
int main()
{
   int i,m,n;
   cin>>m>>n;
   int k;
   if(m>n) k=n;
   else k=m;
   i=k;

   while(m%i!=0||n%i!=0
) 
            i--;
   cout<<i;
}

