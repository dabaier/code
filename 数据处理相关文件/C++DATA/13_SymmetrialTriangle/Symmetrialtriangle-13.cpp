#include <iostream>
using namespace std;
int main() 
{
	int a, b, c;
	cin >> a;
	b = a - 1;
	c = 1;
	while (b >= 0 && c <= 2 * a - 1)
	{
	int w = b;
	int t = c;
	for (b = w; b > 0; b--)
		cout << ' ';
	for (c = 1; c <= 2 * t - 1; c++)
		cout << '0';
	for (b = w; b > 0; b--)
		cout << ' ';
	b = w;
	c = t;
	b--; c++;
	cout << endl;
}
	b = 1;
	c = a - 1;
	while (b >= 0 && c >= 1)
	{
	int w = b;
	int t = c;
	for (b = w; b > 0; b--)
		cout << ' ';
	for (c = 1; c <= 2 * t - 1; c++)
		cout << '0';
	for (b = w; b > 0; b--)
		cout << ' ';
	b = w;
	c = t;
    b++; c--;
	cout << endl;
	}
cout << endl;
return 0;
}


