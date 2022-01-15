
#include <iostream>

using namespace std;
int multiplicationTable(int x)
{
	int y,z,sum;
	y = 1;
	z = 1;
	sum = 0;
	for (; z < x + 1; z++)
	{
		y = 1;
		for (; y < z + 1; y++)
		{
			sum = y * z;
			cout << y << "*" << z << "=" << sum <<"  ";
		}
		cout << endl;
	}



	return 0;




}





int main()
{
	int a;
    cin >> a;
	multiplicationTable(a);
	return 0;
}






	







	

	
	









	



