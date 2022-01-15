
#include <iostream>

using namespace std;


int oddPrime( int y)
{
	int c,x;
	x = 0;
	c = 2;
	for (; x < y + 1; x++)
	{
		if (x % 2 == 0) continue;
		else for (; c < y + 1; c++)
		{
			if (x % c == 0) break;
			else continue;
		}
		if (c == y + 1) cout << x;
		else continue;



	}


	return 0;





}


int main()
{
	int b;
	cin >> b;
	
	oddPrime(b);


	
	return 0;
    }









	







	

	
	









	



