//import java.util.Scanner;
//
//class Calculator {
//    public int num1;
//    public int num2;
//    public int Add(int num1, int num2) {
//        return num1 + num2;
//    }
//    public int Sub(int num1, int num2) {
//        return num1 - num2;
//    }
//    public int Mul(int num1, int num2) {
//        return num1 * num2;
//    }
//    public double Div(int num1, int num2) {
//        return (double)num1 / (double)num2;
//    }
//}
//
//public class TestDemo1 {
//    /* 1、编写一个类Calculator,有两个属性num1,num2,这两个数据的值，不能在定义的同时初始化，最后实现加减乘
//    除四种运算.
//
//       2、设计一个包含多个构造函数的类，并分别用这些构造函数来进行实例化对象。
//
//       3、实现交换两个变量的值。要求：需要交换实参的值。
//   */
//    public static void main(String[] args) {
//        Calculator calculator = new Calculator();
//        Scanner scan = new Scanner(System.in);
//        System.out.println("请输入两个数： ");
//        calculator.num1 = scan.nextInt();
//        calculator.num2 = scan.nextInt();
//        System.out.println(calculator.Add(calculator.num1, calculator.num2));
//        System.out.println(calculator.Sub(calculator.num1, calculator.num2));
//        System.out.println(calculator.Mul(calculator.num1, calculator.num2));
//        System.out.println(calculator.Div(calculator.num1, calculator.num2));
//
//    }
//}


/*
class Person {
    private String name;
    private int age;
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
    public void shenfen1() {
        System.out.println(this.name + "舞者");
    }
    public void shenfen2() {
        System.out.println(this.name + "爱豆");
    }
    public void show() {
        System.out.println(this.name + " " + this.age) ;
    }
}
 public class TestDemo1 {
    public static void main(String[] args) {
        Person person = new Person("王晨艺",21);
        person.show();
        person.shenfen1();
        person.shenfen2();

    }

 }*/

/*//实现交换两个变量的值。要求：需要交换实参的值。

import java.util.Arrays;

public class TestDemo1 {
    public static void swap(int []array) {
        int tmp = 0;
        tmp = array[0];
        array[0] = array[1];
        array[1] = tmp;

    }
    public static void main (String[] args) {
        int []array = {12,16};
        swap(array);
        System.out.println(array[0]);
        System.out.println(array[1]);

    }
}*/


//class Person {
//    public String name = "wangchenyi";
//    public int age = 21;
//    public void eat() {
//        System.out.println("吃饭");
//    }
//    public void show() {
//        System.out.println("name:" + name + " age: " + age);
//    }
//}
//public class TestDemo1 {
//    public static void main(String[] args) {
//        Person person = new Person();//实例化一个对象
//        person.show();//访问数据成员
//    }
//}

class Person {
    private String name;
    private int age;
    //构造方法
    public Person() {
        this.name = "wangchenyi";
        this.age = 0;
    }
    
    public void setName(String setName) {
        name = setName;
    }
    public String getName() {
        return name;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public int getAge() {
        return age;
    }
}
public class TestDemo1 {
    public static void main(String[] args) {
        Person person = new Person();
        person.setName("wangchenyi");
        person.setAge(21);
        System.out.println(person.getName());
        System.out.println(person.getAge());
    }
}












