/**
 * java programming exercise 4-1
 * @reproduced by Jason Oh
 */

public class Ex04_1
{
    public static void main(String[] args)
    {
        int x = 30, y = 10, z;
        char op;
        System.out.println("x: " + x + " y: " + y);

        op = '+';
        if (op == '+') z = x + y;
        else z = x - y;
        System.out.println("z: " + z);

        op = '-';
        z = (op == '+') ? x + y : x - y;
        System.out.println("z: " + z);

    }
}

