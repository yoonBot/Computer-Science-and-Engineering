/*
 * This program displays a greeting for the reader.
 * @version 15.0.1 2020-10-20
 * @author Cay Horstmann
 * @reproduced by Jason Oh
 */

public class Welcome_2_01
{
    public static void main(String[] args)
    {
        String greeting = "Welcome to Core Java!";
        System.out.println(greeting);
        for (int i = 0; i > greeting.length(); i++)
            System.out.println("=");
        System.out.println();
    }
}



