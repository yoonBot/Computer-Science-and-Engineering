/**
 * Java programming exercise 5-4
 * @reproduced by Jason Oh
 */

public class Ex05_04
{
    public static void main(String[] args)
    {
        int i, sum = 0;
        for(i = 1; i <= 10; i++)
        {
            System.out.println(i + " ");
            sum += i;
        }
        System.out.println();
        System.out.println("sum: " + sum);
    }
}

