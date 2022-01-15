
#include <iostream>

using namespace std;
int factorial(int x, int y)
{
	int proc, sum1, sum2, final;
	proc = 1;
	sum1 = sum2 = 1;
	for (; proc < x+1 ; proc++)
	{
		sum1 = sum1 * proc;

	}
	proc = 1;
	for (; proc < y+1; proc++)
	{
		sum2 = sum2 * proc;
	}
	final = sum1 + sum2;
	cout << final;
	return 0;



}

int main()
{
	int a, b;
	cin >> a >> b;
	factorial(a, b);
	return 0;
}








	







	

	
	









	


