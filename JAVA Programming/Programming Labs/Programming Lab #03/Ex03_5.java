/**
 * Java programming exercise 3-5
 * @reproduced by Jason Oh
 */

public class Ex03_5
{
    public static void main(String[] args)
    {
        int a = 3, b, c, d;
        System.out.println("a += 5: " + (a += 5));

        a = b = c = d = 10;
        a += b -= c *= d /= 5;

        System.out.println("a: " + a);
        System.out.println("b: " + b);
        System.out.println("c: " + c);
        System.out.println("d: " + d);
    }
}

