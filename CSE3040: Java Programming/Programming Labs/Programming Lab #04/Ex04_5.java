/**
 * Java programming exercise 4-5
 * @reproduced by Jason Oh
 */

public class Ex04_5{
    public static void main(String[] args){
        String s = "JavaJAVA";
        int n = s.length();
        System.out.println("length of String s: " + n + '\n');

        for (int i = 1; i <= n; i++)
            System.out.println(s.substring(0, i));

        System.out.println();
        System.out.println(s.substring(2, 4));
        System.out.println(s.substring(2));

    }
}


