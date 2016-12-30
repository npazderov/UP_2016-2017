#include <iostream>

using namespace std;

int func5(char poslsimvol)
{
    for (char purvisimvol='A'; purvisimvol<=poslsimvol; purvisimvol++)
    {

            for(char i=purvisimvol; i>='A' ; i--)
            {
                cout<<i;
            }
        cout<<endl;


    }
}
int main()
{
    char poslsimvol;
    cout<<"Vuvedi krainiqt simvol: ";
    cin>>poslsimvol;
    func5(poslsimvol);
    return 0;

}

