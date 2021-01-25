/**
 * Java programming exercise 6-4
 * @reproduced by Jason Oh
 */

public class Ex06_04
{
    public static void main(String[] args)
    {
        int a[] = {11, 13, 15, 17, 19, 21, 23};
        int b[] = new int[a.length];
        int i;

        System.arraycopy(a, 1, b, 2, 3);

        for (i = 0; i < a.length; i++)
            System.out.println(a[i] + " " + b[i]);
    }
}

