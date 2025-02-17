//take number from user ,return addition of even factors

import java.util.*;

class Program240
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);
        
        int iValue = 0, iRet = 0;
        
        System.out.println("Enter the Number : ");

        iValue = sobj.nextInt();

        Numbers nobj = new Numbers();
        iRet = nobj.EvenFactors(iValue);

        System.out.println("Addition is : "+iRet);
    }
}


class Numbers
{
    public int EvenFactors(int iNo)
    {
        int iCnt = 0, iSum = 0;

        if(iNo % 2 != 0)
        {
            return 0;
        }

        for(iCnt = 2; iCnt <= iNo/2; iCnt+=2)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;                      
            }
        }
        return iSum;
    }
}

//time complexity n/4