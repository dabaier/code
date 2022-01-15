#include <iostream>
using namespace std;
int main()
{
	char c1;
	cin >> c1;
	if ((c1 == '_') || ((c1 >= 'A') && (c1 <= 'z')))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
