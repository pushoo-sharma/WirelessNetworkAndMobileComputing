#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    char input[10] ={'l','e','t','s','s','t','u','d','y'};
    char input2[10]={'l','e','t','s','t','u','d'};
    for(int i= 0;i<strlen(input2);i++)
    {
        if(input[i] != input2[i])
        count++;
    }
    printf("%d",count);
    return 0;
}