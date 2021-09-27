#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

// g++.exe

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
	string input;
	int length = 0;
	
	cout << "\n\n";

	align_right(width("Input Sequence")); cout << "Input Sequence\n";
	align_right(width("Input Sequence")); cout << ">> ";
	cin >> input;

	system("CLS");

	length = input.size() / 3;
	
	if(input.size() % 3 > 0)
	{
		length += 1;
	}
	
	string sequence[length][3];
	
	int j = 2;
	
	for(int i = 0; i < length; ++i)
	{	
		sequence[i][0] = input[j - 2];
		sequence[i][1] = input[j - 1];
		sequence[i][2] = input[j];
		
		j += 3;
	}
	
	cout << "\n\n";
	cout << "\n\n";
	
	align_right(width("Input Sequence")); for(int i = 0; i < length; ++i)
	{
		string word = sequence[i][0] + sequence[i][1] + sequence[i][2];
	
		if(word == "TTT" || word == "TTC")
		{
			cout << "F ";
		}
		
		else if(word == "TTA" || word == "TTG" || word == "CTT" || word == "CTC" || word == "CTA" || word == "CTG")
		{
			cout << "L ";
		}
		
		else if(word == "TCT" || word == "TCC" || word == "TCA" || word == "TCG" || word == "AGT" || word == "AGC")
		{
			cout << "S ";
		}
		
		else if(word == "TAT" || word == "TAC")
		{
			cout << "Y ";
		}
		
		else if(word == "TGT" || word == "TGC")
		{
			cout << "C ";
		}
		
		else if(word == "TGG")
		{
			cout << "W ";
		}
		
		else if(word == "CCT" || word == "CCC" || word == "CCA" || word == "CCG")
		{
			cout << "P ";
		}
		
		else if(word == "CAT" || word == "CAC")
		{
			cout << "H ";
		}
		
		else if(word == "CAA" || word == "CAG")
		{
			cout << "Q ";
		}
		
		else if(word == "CGT" || word == "CGC" || word == "CGA" || word == "CGG" || word == "AGA" || word == "AGG")
		{
			cout << "R ";
		}
		
		else if(word == "ATT" || word == "ATC" || word == "ATA")
		{
			cout << "I ";
		}
		
		else if(word == "ATG")
		{
			cout << "M ";
		}
		
		else if(word == "ACT" || word == "ACC" || word == "ACA" || word == "ACG")
		{
			cout << "T ";
		}
		
		else if(word == "AAT" || word == "AAC")
		{
			cout << "N ";
		}
		
		else if(word == "AAA" || word == "AAG")
		{
			cout << "K ";
		}
		
		else if(word == "AGT" || word == "AGC")
		{
			cout << "S ";
		}
		
		else if(word == "GTT" || word == "GTC" || word == "GTA" || word == "GTG")
		{
			cout << "V ";
		}
		
		else if(word == "GCT" || word == "GCC" || word == "GCA" || word == "GCG")
		{
			cout << "A ";
		}
		
		else if(word == "GAT" || word == "GAC")
		{
			cout << "D ";
		}
		
		else if(word == "GAA" || word == "GAG")
		{
			cout << "E ";
		}
		
		else if(word == "GGT" || word == "GGC" || word == "GGA" || word == "GGG")
		{
			cout << "G ";
		}
		
		else
		{
			cout << "* ";
		}
	}
	
	cout << "\n\n";
	cout << "\n\n";
	
	return 0;
}
