/******************************************************************************

counting the number of vowels in a string.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char s[11]="javatpoint";
    int i=0,count=0;
    while(i<11)
    {
        if(s[i] =='a' || s[i] =='e' || s[i] =='i' || s[i] =='o' || s[i] =='u')
        {
            count++;
        }
        i++;
    }
    printf("the number of vowels %d",count);

    return 0;
}