/**
 * This program demonstrates console input.
 * @version 15.0.1 2020-10-20
 * @author Cay Horstmann
 * @reproducer Jason Oh
 */

import java.util.*;

public class Listing_3_02_InputTest
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);

        // get first input
        System.out.print("What is your name? ");
        String name = in.nextLine();

        // get second input
        System.out.print("How old are you? ");
        int age = in.nextInt();

        // display output on console
        System.out.println("Hello, " + name + ". Next year, you'll be " + age);
     }
}




