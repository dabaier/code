#include <iostream>
using namespace std;
int main ()
{char a;
    a=cin.get();
   
    if(a=='_' || (a>='a'&&a<='z') || (a>='A'&&a<='Z'))
       cout<<"Yes\n";
    else cout<<"No\n";
    
    return 0;
	}


