#include<iostream>

using namespace std;

void sort(int n);
void swap(double *p1, double *p2);
double a[10];



void sort(int n)
	{
		int low;
		for(int i = 0; i < n - 1; ++i)
			{
			
				for(int j = i + 1; j < n; ++j)
					{
						if(a[j] < a[i])
							{
								swap(&a[i], &a[j]);
							}	
					}
			}
	}

void swap(double *p1, double *p2)
	{
		double temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}




int main()

	{
		for(int i = 0; i < 10; ++i)
			{
				cout << "Enter Array Element # " << i << endl;
				cin >> a[i];
			}
			
		sort(10);
		
		cout << "Here is the array sorted: " << endl;
		for(int i = 0; i < 10; ++i)
			{
				cout << a[i] << " ";
			}
			
		return 0;			
			
	}
