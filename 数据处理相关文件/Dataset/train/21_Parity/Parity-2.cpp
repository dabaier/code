

#include <iostream>
#include<iomanip>
using namespace std;
int judgement(int x)
{
	if (x % 2 == 0) cout << "Y";

	else cout << "N";
	return 0;
}









int main()
{
	int num00, num01, value;
	cin >> num00 >> num01;
	value = num00 + num01;
	judgement(value);
	return 0;
}






