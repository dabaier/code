#include<iostream>    
using namespace std;
int main()
{
	char c;
	int a = 0, b = 0, d = 0;

	while (cin.get(c))
	{
		
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			a++;
		
		else if (c == ' ')
			d++;
		else if (c >= '0'&&c <= '9')
			b++;
		
	}
	cout << a << " "<< d << " " <<  b<< endl;
	
	return 0;
}

