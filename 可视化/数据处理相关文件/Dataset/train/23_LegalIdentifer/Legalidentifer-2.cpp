

#include <iostream>
#include<iomanip>
using namespace std;

char judgement(char x)
{
	if (x == 95 || ((x >= 'a') && (x <= 'z')) || ((x >= 'A') && (x <= 'Z'))) cout << "Yes";
	else cout << "No";
	return 'H';


}







int main()
{
	char symbol;
	cin >> symbol;
	judgement(symbol);
	return 0;
	
}


