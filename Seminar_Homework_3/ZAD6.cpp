#include <iostream>

using namespace std;

void func6(char *string)
{
    bool arr[26]={false};
    int counter=0;
    for(int i=0; string[i]!= 0 ; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
		{
			int letter_index = string[i] - 'A';
			arr[letter_index] = true;
		}
		else if (string[i] >= 'a' && string[i] <= 'z')
		{
			int letter_index = string[i] - 'a';
			arr[letter_index] = true;
		}
		counter++;
    }
    int bukvi = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i])
		{
			char x = i + 'a';
			cout << x;
			bukvi++;
		}
	}

	cout << endl;
	cout <<"V teksta ima " << bukvi << " razlichni bukvi." << endl;
}
int main()
{
	char string[256];
	cout<<"Enter Text: ";
	cin.getline(string, 256);

	func6(string);

	return 0;
}
//zadachata sum q pravil s malko pomosht :D
