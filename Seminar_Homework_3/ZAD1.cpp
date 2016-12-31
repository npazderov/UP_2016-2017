#include <iostream>

using namespace std;

int func(char *string)
{
    int counter=0;
    int i;
    for(int i=0; string[i]!=0 ; i++)
    {
	if(string[i]!=' ')
	{
        counter++;
	}
        if(counter == '/n')
        {
            break;
        }

    }

    cout<<"broi simvoli: " << counter <<endl;
    cout<<"1vi simvol : " << string[0]<<endl;
    cout<<"Sreden simvol : " << string[counter/2]<<endl;
    cout<<"Posleden simvol: " <<string[counter-1] <<endl;

    return counter;
}
int main()
{
    char string[50];
    cout<<" Enter Text: ";
    cin.getline(string,50);
    func(string);



}
