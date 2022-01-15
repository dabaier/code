#include <iostream>
using namespace std;
int main()
{
	int a, b,sum;
	cin >> a >> b;
	sum = a + b;
	if (sum % 2 == 0)
		cout << " Y " << endl;
	else
		cout << "N" << endl;
	return 0;
}
