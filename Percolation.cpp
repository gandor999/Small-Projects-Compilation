#include <iostream>
#include <cstring>

using namespace std;

int width(char word[100])
{
	int width = 50 - ((strlen(word) - 6) / 2);
	return width;
}

int width_int(int num)
{
	int width = 50 - ((num - 6) / 2);
	return width;
}

void align_right(int width)
{
	for(int i = 0; i < width; ++i)
	{
		cout << " ";
	}
}

int main()
{
	char input[100];
	int length = 0;
	int count_comma = 0;
	int count_semicolon = 0;
	
	cout << "\n\n";
	
	align_right(width("Percolation")); cout << "Percolation\n\n";
	
	cout << "\n\n";
	
	align_right(width("Can your sequence make water flow?")); cout << "Can your sequence make water flow?";
	
	cout << "\n";
	
	align_right(width("Sample sequence: 1,0,0;0,0,1")); cout << "Sample sequence: 1,0,0;0,0,1";
	
	cout << "\n\n";
	cout << "\n\n";
	
	
	align_right(width("Enter sequence")); cout << "Enter sequence\n";
	align_right(width("Enter sequence")); cout << ">> ";
	cin.getline(input, 100);
	
	system("CLS");
	
	cout << "\n\n";
	
	if(strlen(input) == 1 && input[0] == '0')
	{
		align_right(width("Nope")); cout << "Nope";
		cout << "\n\n";
		cout << "\n\n";
	}
	
	else{
		
		length = strlen(input);
		
		cout << "\n\n";
		
		for(int i = 0; i < length; ++i)
		{	
			if(input[i] == ';')
			{
				count_semicolon++;
			}
		}
		
		for(int i = 0; i < length; ++i)
		{
			if(input[i] == ',')
			{
				count_comma++;
			}
			
			if(input[i] == ';')
			{
				break;
			}
		}
		
		int rows = count_semicolon + 1;
		int columns = count_comma + 1;
		
		int matrix[rows][columns];   //g++ auto dynamic array
		
		int k = 0;
		int j = 0;
		
		for(int i = 0; i < length; ++i)
		{
			if(input[i] != ',' && input[i] != ';')
			{
				if(input[i] == '1')
				{
					matrix[k][j] = 1;
				}
				
				if(input[i] == '0')
				{
					matrix[k][j] = 0;
				}
				
				j++;
			}
			
			if(input[i] == ';')
			{
				k++;
				j = 0;
			}
		}
		
		
		
		for(int i = 0; i < rows; ++i)
		{
			align_right(width_int(columns * 2 - 1)); for(int j = 0; j < columns; ++j)
			{
				cout << matrix[i][j] << " ";
			}
			
			cout << endl;
		}
		
		cout << "\n\n";
		
		for(int i = 0; i < rows; ++i)
		{
			for(int j = 0; j < columns; ++j)
			{
				
				if(i == rows - 1)
				{
					align_right(width("Yes! Water can flow!")); cout << "Yes! Water can flow!";
					break;
				}
				
				if(matrix[i][j] == 1)
				{
					if(matrix[i + 1][j - 1] == 1 || matrix[i + 1][j] == 1 || matrix[i + 1][j + 1] == 1)
					{
						j == columns;
					}
					
					else if(matrix[i + 1][j - 1] != 1 && matrix[i + 1][j] != 1 && matrix[i + 1][j + 1] != 1)
					{
						
						align_right(width("Nope")); cout << "Nope";
						i = rows;
					}
				}
				
			}
		}
	}
	
	cout << "\n\n";
	cout << "\n\n";
	cout << "\n\n";
	
		
	
	return 0;
}
