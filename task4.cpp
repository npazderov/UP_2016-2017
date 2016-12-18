#include<iostream>

using namespace std;
int enterArray(int arr[10][10],int rows,int columns = 2) //Vuvejdame matricata;
{
for(int i = 0;i<rows;i++)
    {
    for(int j =0;j<columns;j++)
        {
        cout<<"arr["<<i<<"]["<<j<<"]=";
        cin>>arr[i][j];
        }
        cout<<endl;
    }

}

void Sorting(int arr[][10],int Row,int Column) //Sortirame
{
int x;
for(int i = 0; i< Row;i++)
{
    for(int j = 0;j< Column; j++)
    {
        x=j+1 ;
        for(int y = i; y<Row; y++)
        {
            for(int z = x ;z < Column ; z ++)
            {
                if(arr[i][j]> arr[y][z]) // Sravnqvame vseki element sus sledvashtiq
                {
                 swap(arr[i][j],arr[y][z]); // koito e po-maluk zastava otlqvo
                }

            }
            x=0;

        }

    }


}
      for(int i = 0 ; i < Row ; i++) // Izvejdame matricata
      {
         for(int j = 0 ; j < Column ; j++)
         {
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
      }

}

int main()
{
    int arr[10][10];
    int R,C;
    cout<<"Insert matrix size"<<endl;
    cout<<"Enter rows :";
    cin>>R;
    cout<<"Enter columns :";
    cin>>C;
    enterArray(arr,R,C);
    Sorting(arr,R,C);
    return 0;
}

