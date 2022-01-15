#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int a = 100;
	for (; a != 1000; a++)
	{
		int c, d, e;
		e = a % 10;
		d = ((a - e) / 10) %10;
		c = (a - d * 10 - e) / 100;
		if (pow(e, 3) + pow(d, 3) + pow(c, 3) == a) cout << a<<" ";
		else continue;
	}
	return 0;
}






















