import java.util.Scanner;


/*public class TestDemo {
        public static void main(String[] args) {
            Calculator calculator = new Calculator();
            Scanner scan = new Scanner(System.in);
            System.out.println("请输入：");
            calculator.x = scan.nextInt();
            calculator.y = scan.nextInt();
            System.out.println(calculator.Add( calculator.x,calculator.y));
            System.out.println(calculator.Sub(calculator.x,calculator.y));
            System.out.println(calculator.Mul(calculator.x,calculator.y));
            System.out.println(calculator.Div(calculator.x,calculator.y));
            scan.close();
        }
}*/

class Person {
    public String name = "wangchengyi";
    public int age = 21;
    public String shenfe = "舞者";
    public void show() {
        System.out.println(name + " " + age + " " + shenfe);
    }
}
class Student {
    public String name = "sunjie";
    public int age = 19 ;
}


public class TestDemo {
    public static void main(String[] args) {
        Person person = new Person();
        Student student = new Student();
        person.show();
        System.out.println(student.name);
        System.out.println(student.age);

    }
}



class Calculator {
    /*public int x;
    public int y;
    public int Add(int x, int y) {
        return x + y;
    }
    public int Sub(int x, int y) {
        return x - y;
    }
    public int Mul(int x, int y) {
        return x * y;
    }
    public double Div(int x, int y) {
        return (double)x / (double)y;
    }
*/
    private int x;
    private int y;

}
