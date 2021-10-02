#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
	
void miniMaxSum(vector<int> arr) 
{
	uint64_t lowest = 0;
	uint64_t highest = 0;
	
	int arrSize = arr.size();
	
	for(int j = 1; j < arrSize; ++j)
	{	
		lowest = lowest + arr[j];
	}
	
	highest = lowest;
	
	for(int i = 1; i <= arrSize; ++i)
	{
		uint64_t sum = 0;
		
		for(int j = 1; j < arrSize; ++j)
		{
			sum = sum + arr[j];
		}
		
		if(lowest > sum)
		{
			lowest = sum;
		}
		
		if(highest < sum)
		{
			highest = sum;
		}
		
		swap(&arr[0], &arr[i]);
	}
	
	cout << lowest << " " << highest;
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};
	
	miniMaxSum(arr);
}
