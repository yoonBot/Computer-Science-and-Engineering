/**
  * Java programming exercise 2-4
  * @reproduced by Jason Oh
  */

public class Ex02_4
{
    public static void main(String[] args)
    {
        float f = 0;
        double d = 0;
        for(int i = 0; i <= 100000; i++)
        {
            f += 1000000;
            d += 1000000;
        }
        System.out.println("float : " + f / 100000.0);
        System.out.println("float : " + d / 100000.0);
    }
}

