/**
 * java programming exercise 4-3
 * @reproduced bu Jason Oh
 */

public class Ex04_3{
    public static void main(String[] args){
        int x = 1, y = 2, z;

        z = x + y * 2 - ++x + (y += 3);

        System.out.println("x: " + x + " y: " + y + " z: " + z);
        System.out.println("x / y * 2: " + (x / y * z));
        System.out.println("x = y += z: " + (x = y += z));
    }
}


