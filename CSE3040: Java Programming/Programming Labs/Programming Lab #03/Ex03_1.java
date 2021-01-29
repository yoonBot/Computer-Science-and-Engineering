/**
 * Java programming exercise 3-1
 * @reproduced by Jason Oh
 */

public class Ex03_1
{
    public static void main(String[] args)
    {
        int x = 1;
        System.out.println("x: " + x);

        for (int i = 1; i <= 3; i++)
        {
            System.out.println("x: " + x++ + " ");
        }
        System.out.println("\nx: " + x);
    }
}


