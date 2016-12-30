#include <iostream>

using namespace std;

void func2(char *string)
{

    int counter=0;
    for(int i=0; string[i]!=0 ; i++)
    {

        if(string[i]=='T')
        {
            cout<<"T  e na poziciq: " << (counter+1)<<endl;
            return;
        }

        counter++;
    }

     cout<<"T ne e vuv vuvedeniq niz" <<endl;

}
int main()
{
    char string[100];
    cin.getline(string,100);
    func2(string);


}
