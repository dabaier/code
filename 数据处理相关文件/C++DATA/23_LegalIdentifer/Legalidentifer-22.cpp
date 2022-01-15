#include <iostream>
using namespace std;
int main()
{
char c1;
cin>>c1;
if(c1=='_'||(c1>=65&&c1<=90)||(c1>=97&&c1<=122))
cout<<"Yes";
else
cout<<"No";
return 0;
}
