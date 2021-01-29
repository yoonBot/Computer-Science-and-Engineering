/**
  * Java programming exercise 2-5
  * @reproduced by Jason Oh
  */
 
public class Ex02_5
{
    public static void main(String[] args)
    {
        boolean b1, b2;
        b1 = (5 == 3);
        b2 = (5 > 3);
        System.out.println("5 == 3          : " + b1);
        System.out.println("5 > 3           : " + b2);
        System.out.println("5 == 3 && 5 > 3 : " + (b1 && b2));
        System.out.println("5 == 3 || 5 > 3 : " + (b1 || b2));
    }
}

