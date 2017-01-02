#include <iostream>

using namespace std;

void sort(int* arr, int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size- 1 - i ; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int elem = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = elem;

            }
        }
    }



}
int main()
{
    int a[] = {5,4,3,2,1};
    int size = 5;
    sort(a,size);
    for(int i=0 ; i < size; i++)
    {
        cout<<a[i];
    }

    return 0;
}

