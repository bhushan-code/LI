//addition of n number
import java.util.*;



class Program262
{
    public static void main(String A[])
    {
        int iSize = 0, i = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the size of array : ");          
        iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);   
        aobj.Accept();
        aobj.Display();  
        iRet = aobj.Maximum();
        System.out.println("Max is : "+iRet);
    }
}



class ArrayX
{
    public int Arr[];
     
    ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    Scanner sobj = new Scanner(System.in);

    public void Accept()
    {
        int i = 0;

        System.out.println("Enter the Elements :");

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i]=sobj.nextInt();
        }
    }
    public void Display()
    {
        int i = 0;

        System.out.println("Entered Elements :");

        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
 
    public int Maximum()
    {
        int i = 0, iMax = Arr[0];

        for(i = 0; i < Arr.length; i++)
        {
            if(iMax < Arr[i])
            {
                iMax = Arr[i];
            }                
        }
        return iMax;
    }
}