#include<iostream>
using namespace std;
int main()
{
   int r,m,n;
   cin>>m>>n;
   r= m%n;
   while ( r!=0)
   {     m=n;n=r;

         r=m%n;

         if(r==0);

   }
   cout<<n;
   return 0;
}

