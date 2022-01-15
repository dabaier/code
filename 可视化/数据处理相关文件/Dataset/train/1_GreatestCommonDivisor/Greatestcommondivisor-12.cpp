#include<iostream>
using namespace std;
int main()
{
   int i,m,n;
   cin>>m>>n;
   if (m>n) i=n;
   else 
   i=m;

   while(m%i!=0||n%i!=0
) 
            i--;
   cout<<i;
}

