#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void plusMinus(vector<int> arr) {
    
    double count_positive = 0;
    double count_negative = 0;
    double count_zero = 0;
    
    int arrSize = arr.size();
    
    for(int i = 0; i < arrSize; ++i)
    {
        if(arr[i] > 0)
        {
            count_positive += 1;    
        }    
        
        if(arr[i] < 0)
        {
            count_negative += 1;
        }
        
        if(arr[i] == 0)
        {
            count_zero += 1;
        }
    }
    
    cout << fixed;
    
    cout << setprecision(6) << count_positive/arrSize << endl;
    cout << setprecision(6) << count_negative/arrSize << endl;
    cout << setprecision(6) << count_zero/arrSize << endl;

}

int main()
{
	vector<int> arr = {1, 2, 3, -1, -2, -3, 0, 0};
	
	plusMinus(arr);
}
