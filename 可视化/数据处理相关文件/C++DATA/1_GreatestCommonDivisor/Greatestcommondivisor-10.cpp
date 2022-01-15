#include<iostream>
using namespace std;
int main()
{
   int i,m,n;
   cin>>m>>n;
   i=m;

   while(i>=m||i>=n||m%i!=0||n%i!=0
) 
            i--;
   cout<<i;
}

