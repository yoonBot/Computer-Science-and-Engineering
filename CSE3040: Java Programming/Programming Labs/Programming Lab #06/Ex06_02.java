/**
 * Java programming exercise 6-2
 * @reproduced by Jason Oh
 */

public class Ex06_02
{
    public static void main(String[] args)
    {
        int[] a = new int[10];
        int b[] = new int[10];
        int i;
        
        for (i = 0; i < 5; i++)
        {
            a[i] = (i + 1) * 10 + 1;
            b[i] = (i + 1) * 100 + 5;
        }

        for (i = 0; i < 15; i++)
            System.out.println(a[i] + " " + b[i]);
    }
}

