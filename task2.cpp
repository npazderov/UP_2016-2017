#include <iostream>

using namespace std;

int func(int arr[6][5],int rows, int columns, int number)
{
 int result;
 int count=0;

    for(int i=0; i <= rows ; i ++)
    {
        for(int j=0 ; j <= columns ; j++)
        {
            if(number == count)
            {
                result = arr[i][j];
            }
            count++;
        }
    }
    return result;

}
int main()
{
    const int row=6;
    const int column=5;
    int arr[6][5]={{1,2,3,4,5},
                   {6,7,8,9,10},
                   {11,12,13,14,15},
                   {16,17,18,19,20},
                   {21,22,23,24,25},
                   {26,27,28,29,30}};

   int number;
   cout<<"Enter Number: "<<endl;
   cin>>number;
   if(number>=0 && number<=10)
   {
       cout<<func(arr,row,column,number);
   }

  return 0;
}
