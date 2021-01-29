/**
 * Java programming exercise 5-6
 *@reproduced by Jason Oh
 */

public class Ex05_06
{
    public static void main(String[] args)
    {
        int i = 0, sum = 0;
        do
        {
            sum += i;
        } while(i++ <= 100);
        System.out.println("sum(1-100): " + sum);
    }
}

