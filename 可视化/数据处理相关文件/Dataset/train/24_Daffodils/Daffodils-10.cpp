#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	a = 100;
	while (a <= 999)
	{
		b = a / 100;
		c = (a - b * 100) / 10;
		d = a - b * 100 - c * 10;


		if (a == b * b*b + c * c*c + d * d*d)
		{
			cout << a<<" ";
		}
		a++;


	}
	cout << endl;


	

	return 0;
}
