#include <iostream>

using namespace std;

 void replaceOccurences(char* str, char charToReplace, char *stringToReplaceWith)
 {
        int i;

    for(int i=0 ; str[i]!=0 ; i++)
     {
         if( str[i]==charToReplace)
         {
            str[i]= *stringToReplaceWith;

         }

     }



 }
int main()
{
    char str[256]="Merry christmas";
    replaceOccurences(str , 'r', "hohoh" );
    cout<<str;
    return 0;
}
