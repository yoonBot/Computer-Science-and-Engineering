/**
 * Java programming exercise 5-8
 * @reproduced by Jason Oh
 */

public class Ex05_08
{
    public static void main(String[] args)
    {
        int n;
        while(true)
        {
            n = (int)(Math.random() * 100);
            if(n == 0) break;
            if(n % 10 == 0) continue;
            System.out.println(n);
        }
    }
}

