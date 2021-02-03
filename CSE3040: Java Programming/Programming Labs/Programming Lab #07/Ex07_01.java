/**
 * Java programming exercise 7-1
 * @reproduced by Jaison Oh
 */

public class Ex07_01
{
    public static void main(String[] args)
    {
        Employee e1 = new Employee("Harry");
        Employee e2 = new Employee();
        System.out.println(e1.getName());
        System.out.println(e2.getName());
        e2.setName(e1.getName() + " Potter");
        System.out.println(e2.getName());
    }
}

class Employee
{
    private String name;

    public Employee(String n)
    {
        name = n;
    }
    
    public Employee()
    {
        name = "anonymous";
       
    }

    public void setName(String n)
    {
        name = n;
    }

    public String getName()
    {
        return name;
    }

}


