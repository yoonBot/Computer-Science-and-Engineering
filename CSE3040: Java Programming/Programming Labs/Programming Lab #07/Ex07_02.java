/**
 * Java programming exercise 7-2
 * @reproduced by Jason Oh
 */

public class Ex07_02
{
    public static void main(String[] args)
    {
        Employee e1 = new Employee("John", 100000);
        Employee e2 = new Employee("Peter");
        Employee e3 = new Employee();
        System.out.println("Salary of " + e1.getName() + " is " + e1.getSalary());
        System.out.println("Salary of " + e2.getName() + " is " + e2.getSalary());
        System.out.println("Salary of " + e3.getName() + " is " + e3.getSalary());
        e1.setSalary(150000);
        System.out.println("Salary of " + e1.getName() + " is " + e1.getSalary());
    }
}

public class Employee
{
    private String name;
    private double salary;
    
    public Employee(String n, double x)
    {
        name = n;
        salary = x;
    }

    public Employee(String n)
    {
        name = n;
        salary = 50000;
    }

    public Employee()
    {
        name = "Employee";
        salary = 50000;
    }

    public void setSalary(double x)
    {
        salary = x;       
    }

    public String getName()
    {
        return name;
    }

    public double getSalary()
    {
        return salary;
    }
}
