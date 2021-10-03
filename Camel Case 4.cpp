#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <cstring>

using namespace std;

string split(string input)
{
    int length = input.size();
    
    string output;
    string lower;
    
    if(input[2] == 'M')
    {
        for(int i = 4; i < length - 2; ++i)
        {
            if(isupper(input[i]))
            {
                lower = tolower(input[i]);
                output = output + " " + lower;
                continue;
            }
            
            output += input[i];
        }
    }
    
    if(input[2] == 'C')
    {
        output += tolower(input[4]);
        
        for(int i = 5; i < length; ++i)
        {    
            if(isupper(input[i]))
            {
                lower = tolower(input[i]);
                output = output + " " + lower;
                continue;
            }
            
            output += input[i];
        }
    }
    
    if(input[2] == 'V')
    {
        for(int i = 4; i < length; ++i)
        {
            if(isupper(input[i]))
            {
                lower = tolower(input[i]);
                output = output + ' ' + lower;
                continue;
            }
            
            output += input[i];
        }
    }
    
    return output;
}

string combine(string input)
{
    int length = input.size();
    
    string output;
    string upper;
    
    if(input[2] == 'M')
    {
        for(int i = 4; i < length; ++i)
        {
            if(input[i] == ' ')
            {
                upper = toupper(input[i + 1]);
                output += upper;
                i += 1;
                continue;
            }
            
            output += input[i];
        }
        
        output += "()";
    }
    
    if(input[2] == 'C')
    {
        output += toupper(input[4]);
        
         for(int i = 5; i < length; ++i)
        {    
            if(input[i] == ' ')
            {
                upper = toupper(input[i + 1]);
                output += upper;
                i += 1;
                continue;
            }
            
            output += input[i];
        }
    }
    
    if(input[2] == 'V')
    {
        if(isupper(input[4]))
        {
            output += tolower(input[4]);
        }
        
        for(int i = 4; i < length; ++i)
        {
            if(input[i] == ' ')
            {
                upper = toupper(input[i + 1]);
                output += upper;
                i += 1;
                continue;
            }
            
            output += input[i];
        }
    }
    
    return output;
}

int main()
{
    string input;
    string output;
    
    getline(cin, input);
    
    input.erase(remove(input.begin(), input.end(), '\r'), input.end() );
    input.erase(remove(input.begin(), input.end(), '\t'), input.end() );
    input.erase(remove(input.begin(), input.end(), '\n'), input.end() );

	if(input[0] == 'S')
	{
	    output = split(input);
	    output.erase(remove(output.begin(), output.end(), '\r'), output.end() );
        output.erase(remove(output.begin(), output.end(), '\t'), output.end() );
        output.erase(remove(output.begin(), output.end(), '\n'), output.end() );
        
	    cout << output;
	}
	
	if(input[0] == 'C')
	{
	    output = combine(input);
	    output.erase(remove(output.begin(), output.end(), '\r'), output.end() );
        output.erase(remove(output.begin(), output.end(), '\t'), output.end() );
        output.erase(remove(output.begin(), output.end(), '\n'), output.end() );
	    
	    cout << output;
	}
	
	cout << endl;
    
    return 0;
}

