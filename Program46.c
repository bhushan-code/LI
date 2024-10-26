//Problem - take number from user and check whether it is divisiible by 3 and 5 both

//Algorthm
/*
    START

    STOP
*/

 
#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)                        
{
    

    if(((iNo % 3) == 0) && ((iNo % 5) == ))
        {
            return true;
        }
    else
        {
            return false;
        }
}


int main()
{
    int iValue = 0;
    bool bFlag = false;
    
    printf("Enter the number :");
    scanf("%d",&iValue);

    bFlag = CheckDivisible(iValue);                   

    if(bFlag == true)
        {
            printf("%d is divisible by 3 and 5\n", iValue);
        }
    else
        {
            printf("%d is not divisible by 3 or 5\n", iValue);

        }
    return 0;
} 


 
/* 

|_______________________________________________
|CMD                                     
|_______________________________________________
|gcc Program.c -o Myexe
|./Myexe
|Enter the number : 15
|15 is not divisible by 3 and 5
|./Myexe
|Enter the number : 8
|8 is  not divisible by 3 and 5
|________________________________________________

*/