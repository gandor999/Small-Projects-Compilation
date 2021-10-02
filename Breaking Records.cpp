#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> breakingRecords(vector<int> scores) 
{
    int lowest = scores[0];
    int highest = scores[0];
    int count_break_low = 0;
    int count_break_high = 0;
    
    
    for(int i = 1; i < scores.size(); ++i)
    {
    	if(lowest > scores[i])
    	{
    		lowest = scores[i];
    		count_break_low += 1;
		}
		
		else if(highest < scores[i])
		{
			highest = scores[i];
			count_break_high += 1;
		}
	}
	

	
	return {count_break_high, count_break_low};
    
}



int main()
{
	
	vector<int> scores = {10, 5, 20, 20, 4, 5, 2, 25, 1};
	
	vector<int> result = breakingRecords(scores);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }
    
    return 0;
}
