#include <iostream>
using namespace std;
int main()
{
	char c1;
	cin >> c1;
	if (c1 == 'A')
		cout << 100 << "~" << 85 << endl;
	else if (c1 == 'B')
		cout << 84 << "~" << 70 << endl;
	else if (c1 == 'C')
		cout << 69 << "~" << 60 << endl;
	else if (c1 == 'D')
		cout << "no pass" << endl;
	else cout << "error" << endl;
	return 0;
}
