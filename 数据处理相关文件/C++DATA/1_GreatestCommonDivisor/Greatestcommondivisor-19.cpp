#include<iostream>
using namespace std;
int main()
{
   int i,m,n;
   cin>>m>>n;
   i=m;

   while((m%i!=0)||(n%i!=0)
) 
            i--;
   cout<<i;
}

