#include <iostream>
using namespace std;
int main()
{
	char c1;
	int n = 0, x = 0, y = 0;
	while (cin.get(c1) && c1 != '\n')
	{
		if ((c1 >= 'A' &&c1 <= 'Z')||(c1 >= 'a'&& c1 <= 'z'))
			n = n + 1;
		else if (c1 <= '9'&&c1 >= '0')
			x = x + 1;
		else if (c1 == ' ')
			y = y + 1;
	}
	cout << n << " " << y<< " " << x << endl;
	return 0;
}
