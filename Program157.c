#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your entered the string : %s\n",Arr);

    return 0;
}