/**
 * Java programming exercise 5-2
 * @reproduced by Jason Oh
 */

import java.util.Scanner;

public class Ex05_02
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.println("What is your name?");
        String name = in.nextLine();
        String message = String.format("Hello %s!", name);
        System.out.println(message);
        in.close();
    }
}

