#include <iostream>
using namespace std;
int main() 
{
int i,j,n;
cin>>n;

for (i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(i<j) //i>j
cout<<" ";
else
cout<<"0";
}
cout<<endl;
}
for (i=1;i<=n;i++)
{
for(j=n-1;j>=1;j--)
{
if(i>j) //i>j
cout<<" ";
else
cout<<"0";
}
cout<<endl;
}

cout<<endl;
}

