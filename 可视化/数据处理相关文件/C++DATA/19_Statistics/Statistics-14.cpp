#include <iostream>
using namespace std;
int main()
{
     char i;
     int a=0,b=0,c=0; 
      
     while(cin.get(i))
     {
             if(i=='\n')
                        break;
             if((i>='A' && i<='Z')||(i>='a' && i<='z'))
                  a++;
             else if(i>='0'&&i<='9')
                 b++;
             else if(i==' ')
                 c++;
      
     }
     cout<<a<<" "<<c<<" "<<b<<endl;
	
     
     return 0;
}
