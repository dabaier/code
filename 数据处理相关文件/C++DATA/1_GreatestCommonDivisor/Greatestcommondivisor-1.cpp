#include<iostream>
using namespace std;
int main()
{
   int i,m,n;
   cin>>m>>n;
   if(m>n) i=m;
   else i=n;

   while(m%i!=0||n%i!=0
) 
            i--;
   cout<<i;
}

