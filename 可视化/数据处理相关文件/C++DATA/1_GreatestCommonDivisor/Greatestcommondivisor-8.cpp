#include<iostream>
using namespace std;
int main()
{
   int i,m,n;
   cin>>m>>n;
   m=m<n?m:n;
         i=m-1;

   while(m%i!=0||n%1!=0
) 
            i--;
   cout<<i;
}

