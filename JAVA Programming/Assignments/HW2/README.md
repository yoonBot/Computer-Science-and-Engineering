# <h1 align='center'> CSE3040: Java Programming (Fall 2020) Homework 2

#### **`Problem 6 (20 points) >`**

##### * We would like to write a Java program that prints the Fibonacci sequence. The definition of Fibonacci sequence is as follows.
##### F(0) = 0, F(1) = 1, F(n) = F(n - 1) + F(n - 2)
##### So starting from F(0), the sequence will be as follows:
##### 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610...
##### * In order to fullfill the goal, we have implemented a part of the code. Complete the program so that the program runs correctly and produces the expected output.

###### public class Problem06 {
###### ____public static void main (String[] args) {
###### ________IntSequence seq = new FibonacciSequence();
###### ________for (int i = 0; i < 20; i++) {
###### _____________if (seq.hasNext() == false) break;
###### _____________System.out.print (seq.next() + " ");
###### ________}
###### ________System.out.println (" ");
###### ____}
###### }

##### * You MUST NOT modify class Problem06.
##### * In the added code, you must NOT use while loops or for loops
##### * IntSequence must be defined as an interface
##### * Expected output
###### 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181

#### **`Problem 7 (20 points) >`**

##### * We would like to write a program that takes an integer from user and prints the integer in a binary number format.
##### * In order to fullfill the goal, we have implemented a part of the code. Complete the program so that the program runs without error and produces correct results. 

###### public class Problem07 {
###### ____public static void main (String[] args) {
###### ________Scanner in = new Scanner (System.in);
###### ________System.out.print("Enter a positive integer: ");
###### ________String str = in.nextLine();
###### ________int num = Integer.parseInt(str);
###### ________in.close();
###### ________System.out.println("Integer: " + num);
###### ________IntSequenceStr seq = new BinarySequenceStr(num);
###### ________System.out.print("Binary number: ");
###### ________while (seq.hasNext()) System.out.print (seq.next());
###### ________System.out.println(" ");
###### ____}
###### }

##### * You MUST NOT modify class Problem07.
##### * IntSequenceStr should be defined as an interface
##### * Example run
###### Enter a positive number: 64
###### Integer: 64
###### Binary: 1000000
##### Tip: You may use Math.pow()

#### **`Problem 8 (20 points) >`**

##### * We would like to write a Java program that calculates the sum of area of multiple shapes.
##### * Supported shapes are circles, squares, and rectangles.
##### * We have implemented a part of the code. Complete the missing part so that to program produces correct results. 

###### public class Problem08 {
###### __public static void main (String[] args) {
###### ____Shape[] arr = { new Circle(5.0), new Square(4.0),
###### ____________________new Rectangle(3.0, 4.0), new Square(5.0)};
###### ____System.out.println ("Total area of the shapes is: " + sumArea(arr));
###### __}
###### }

##### * You must not modify the main method in class Problem08. Code can be added outside the main method.
##### * If you define new classes, all instance variables must be defined as private variables.
##### * Expected output
###### Total area of the shapes is: 131.53981633974485
##### * You can use the constant math.PI for calculating area of circles.

#### **`Problem 9 (20 points) >`**

##### * We would like to write a Java program that calculates distance between two points in a N - dimensional space. 
##### * The program supports two distance metrics: EuclideanDistance and ManhattanDistance.
##### * Euclidean distance between two N - dimensional points (p1, p2, ..., pn), (q1, q2, ..., qn) is:
###### d = sqrt((p1 - q1)^2 + (p2 - q2)^2 + ... + (pn - qn)^2)
##### * Manhattan distance between two N - dimensional points (p1, p2, ..., pn), (q1, q2, ..., qn) is:
###### d = |p1 - q1| + |p2 - q2| + ... + |pn - qn|
##### * When the compared two points have different dimensions, then the printed distance is -1. 
##### * We have implemented a part of the code. Complete the missing part so that we get the expected output when we run the program.

###### public class Problem09 {
###### _public static void main (String[] args) {
###### __Point p1 = new Point(new double[] {1.0, 2.0, 3.0});
###### __Point p2 = new Point(new double[] {4.0, 5.0, 6.0});
###### __System.out.println("Euclidean Distance: " + EuclideanDistance.getDist(p1, p2));
###### __System.out.println("Manhattan Distance: " + ManhattanDistance.getDist(p1, p2));
###### __Point p3 = new Point(new double[] {1.0, 2.0, 3.0});
###### __Point p4 = new Point(new double[] {4.0, 5.0});
###### __System.out.println("Euclidean Distance: " + EuclideanDistance.getDist(p3, p4));
###### __System.out.println("Manhattan Distance: " + ManhattanDistance.getDist(P3, p4));
###### _}
###### }

##### * You MUST NOT modify class Problem09.
##### * If you define new classes, all instance variables must be defined as private variables.
##### * Expected output
###### Euclidean Distance: 5.196152422706632
###### Manhattan Distance: 9.0
###### Euclidean Distance: -1.0
###### Manhattan Distance: -1.0

#### **`Problem 10 (20 points) >`**

##### * We would like to write a Java program that compares two instances of class Points.
##### * Class Points has an array of floating-point numbers.
##### * Two Points objects are regarded as equal if the sums of the floating-point numbers are equal.
##### * Also, if the user prints a Point object, it should be printed as shown in the expected output.
##### * Class Problem10 is provided. Complete the missing part so that we get the expected output when we run the program. 

###### public class Problem10 {
###### __public static void main (String[] args) {
###### ____Points p1 = new Points(new double[] {1.0, 2.0, 3.0});
###### ____Points p2 = new Points(new double[] {4.0, 5.0, 6.0});
###### ____System.out.println(p1);
###### ____System.out.println(p2);
###### ____System.out.println(p1.equals(p2));
###### ____Points p3 = new Points(new double[] {1.0, 4.0, 7.0});
###### ____Points p4 = new Points(new double[] {3.0, 9.0});
###### ____System.out.println(p3);
###### ____System.out.println(p4);
###### ____System.out.println(p3.equals(p4));
###### ____Points p5 = new Points(new double[] {1.0, 2.0});
###### ____Points p6 = null;
###### ____System.out.println(p5);
###### ____System.out.println(p6);
###### ____System.out.println(p5.equals(p6));
###### __}
###### }

##### * You MUST NOT modify class Problem10.
##### * You do not need to implement method hashCode.
##### * Example output
###### [sum of points: 6.0]
###### [sum of points: 15.0]
###### false
###### [sum of points: 12.0]
###### [sum of points: 12.0]
###### true
###### [sum of points: 3.0]
###### null
###### false

#### **`Java Naming Convention >`**

##### When you write Java code, it is good to follow the Java Naming Convention, which is a rule for naming variables, constants, methods, and classes.
##### 1) Variable Names
##### Start with a lowercase letter and use uppercase letters as separates. Do not use under bars ('_').
###### int myVar;
##### 2) Constant Names
##### Use all capital letters and sue under bars as separators.
###### final int MY_CONST = 1;
##### 3) Method Names
##### Start with a lowercase letter and use uppercase letters as separators. Do not use under bars.
###### Public class MyClassName

