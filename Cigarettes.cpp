#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int output(int n, int k)
{
	int max;
	
	max = n + (n / k);
	
	if (n % k > 0)
	{
		++max;
	}
	
	return max;
}


int main()
{
	int n, k;
		
	cout << "Input n" << endl;
	cin >> n;
	
	cout << endl;
	cout << "Input k" << endl;
	cin >> k;
	
	cout << endl;
	
	cout << "The max number of cigarettes are: " << output(n, k);

	
	return 0;
}



