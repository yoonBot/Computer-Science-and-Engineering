/**
 * Java programming exercise 6-3
 * @reproduced by Jason Oh
 */

public class Ex06_03
{
    public static void main(String[] args)
    {
        int a[] = {1, 3, 5, 7, 9};
        int b[] = new int[a.length];
        int i;

        b = a;

        for (i = 0; i < a.length; i++)
            System.out.println(a[i] + " " + b[i]);
    }
}

