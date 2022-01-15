#include <iostream>
using namespace std;
int main ()
{
	char a;
	int b=0,c=0,d=0;
while ((cin.get(a)))
{
if ((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
b++;
else if (a>='0'&&a<='9')
c++;
else if (a==' ')
d++;
}
cout<<b<<' '<<d<<' '<<c;
return 0;
}
