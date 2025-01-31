class HackerEarth
{
     public int i;
     protected int j:
} 
 class Hacker extends HackerEarth
{
    int j;
    void display()
    {
        super.j = 30;
        super.i = 15;
        System.out.println(i + "" + j);
    }
    
}

public class TestClass
{
     public static void main(String args[])
    {
        Hacker obj = new Hacker();
        obj.i = 3;
        obj.j = 4;
        obj.display();
    }
}