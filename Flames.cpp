#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int width(char word[100])
{
	int width = 50 - ((strlen(word) - 6) / 2);
	return width;
}

void align_right(int width)
{
	for(int i = 0; i < width; ++i)
	{
		cout << " ";
	}
}

void to_upper(char *p)
	{
		for(int i = 0; i < strlen(p); ++i)
		{
			p[i] = toupper(p[i]);
		}
	}
	
int spaces(char name[100])
{
	int space = 0;
	
	for(int i = 0; i < strlen(name); ++i)
	{
		if(name[i] == ' ')
		{
			++space;
		}
	}
	
	return space;
}

int dots(char name[100])
{
	int dot = 0;
	
	for(int i = 0; i < strlen(name); ++i)
	{
		if(name[i] == '.')
		{
			++dot;
		}
	}
	
	return dot;
}

void flames(int length)
{
	char FLAMES[100] = "0FLAMESFLAMESFLAMESFLAMESFLAMES";
	
	cout << "\n\n\n";
	
	for(int i = 0; i < 26; ++i)
	{
		if(i == length)
		{
			if(FLAMES[i] == 'F')
			{
				align_right(width("Friendship")); cout << "Friendship";
			}
			
			if(FLAMES[i] == 'L')
			{
				align_right(width("Love")); cout << "Love";
			}
			
			if(FLAMES[i] == 'A')
			{
				align_right(width("Affection")); cout << "Affection";
			}
			
			if(FLAMES[i] == 'M')
			{
				align_right(width("Marriage")); cout << "Marriage";
			}
			
			if(FLAMES[i] == 'E')
			{
				align_right(width("Enemy")); cout << "Enemy";
			}
			
			if(FLAMES[i] == 'S')
			{
				align_right(width("Soulmate")); cout << "Soulmate";
			}
		}
			
	}
}

class FLAMES
{
	public:
		
		void menu()
		{
			cout << "\n\n\n";
			align_right(50); cout << "FLAMES\n\n";
			align_right(37); cout << "Press 1 to Play or Press 0 to Exit";
		}
		
		void playgame()
		{
			
			fflush(stdin);
			
			char name1[100];
			char name2[100];
			int count1 = 0;
			int count2 = 0;
			int count_space1 = 0;
			int count_space2 = 0;
			int final_length1 = 0;
			int final_length2 = 0;
			int final_length_overall = 0;
			int count_dot1 = 0;
			int count_dot2 = 0;
	
			cout << "\n\n\n";
			align_right(46); cout << "Enter Your Name\n";
			align_right(46); cout << ">> ";
			cin.getline(name1, 100);
			cout << endl;
			
			align_right(42); cout << "Enter Your Crush's Name\n";
			align_right(46); cout << ">> ";
			cin.getline(name2, 100);
			
			int length_name1 = strlen(name1);
			int length_name2 = strlen(name2);
			
			to_upper(name1);
			to_upper(name2);
			
			cout << endl;
	
			for(int i = 0; i < length_name1; ++i)
			{
				for(int j = 0; j < length_name2; ++j)
				{
					if(name1[i] == name2[j] && name1[i] != ' ')
					{
						++count1;
						j = length_name2;
					}
				}
			}
	
			for(int i = 0; i < length_name2; ++i)
			{
				for(int j = 0; j < length_name1; ++j)
				{
					if(name2[i] == name1[j] && name2[i] != ' ')
					{
						++count2;
						j = length_name1;
					}
				}
			}	
	
			cout << endl;
			
			count_space1 = spaces(name1);
			count_space2 = spaces(name2);
			count_dot1 = dots(name1);
			count_dot2 = dots(name2);
			final_length1 = length_name1 - count1 - count_space1 - count_dot1;
			final_length2 = length_name2 - count2 - count_space2 - count_dot2;
			final_length_overall = final_length1 + final_length2;
				
			flames(final_length_overall);
			
			play_again();
		}
		
		void play_again()
		{
			char choice;
			
			cout << "\n\n\n";
			align_right(width("Play Again?")); cout << "Play Again?\n\n";
			align_right(width("Play Again?")); cout << "1. Yes\n";
			align_right(width("Play Again?")); cout << "0. No\n\n";
			
			align_right(width("Play Again?")); cout << ">> "; cin >> choice;
			
			system("CLS");
			
			if(choice == '1')
			{
				playgame();
			}
			
			if(choice != '1' && choice != '0')
			{
				play_again();
			}
			
			if(choice == '0')
			{
				
			}
		}
};


int main()
{
	char choice;
	
	FLAMES manager;
	
    manager.menu();
	
	cout << endl;
	cout << endl;
	
	align_right(49); cout << ">> ";
	cin >> choice;
	
	system("CLS");
	
	if(choice == '1')
	{
		manager.playgame();
	}
	
	if(choice != '1' && choice != '0')
	{
		main();
	}
	
	if(choice == '0')
	{
		return 0;
	}
	
	cout << "\n\n\n";
	
	system("pause");
	
	return 0;
	
}
