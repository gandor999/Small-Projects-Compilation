#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void prime_function(int rounds)
{
	int isprime;
	
	for(int i = 2; i <= rounds; ++i)
	{
		isprime = true;
		
		for(int j = i - 1; j >= 2 ; --j)
		{
			if (i % j == 0)
			{
				isprime = false;
			}
		}
		
		if(isprime == true)
		{
			cout << i << " ";
		}
	}	
}


int main()
{
	
	int rounds;
	
	cout << "Enter rounds to count prime numbers" << endl;
	cin >> rounds;
	cout << endl;
	
	cout << 0 << " " << 1 << " ";     // not sure if 0 and 1 are prime numbers
	
	prime_function(rounds);
	
	cin.get();
	cin.get();
	
	return 0;
}

