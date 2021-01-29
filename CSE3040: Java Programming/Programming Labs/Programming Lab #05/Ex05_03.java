/**
 * Java programming exercise 5-3
 * @reproduced by Jason Oh
 */

public class Ex05_03
{
    public static void main(String[] args)
    {
        int n = (int)(400 * Math.random()) - 200;
        System.out.println("random number: " + n);
        if(n > 100) System.out.println("more than 100"); 
        else if(n >= 0) System.out.println("0 ~ 100");
        else if(n >=-100) System.out.println("-100 ~ -1");
        else System.out.println("less than -100");
    }
}

