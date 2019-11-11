
/*class Person {
    //属性
    public String name = "wangchenyi";
    public int age = 21;
    public static int count;
    public final int SIZE = 88;
    public static final int SIZE2 = 99;
    //行为
    public void eat() {
        System.out.println("睡觉");
    }
    public void show() {
        System.out.println("name:" + name + "age :" + age);
    }
}
public class TestDemo {
    public static void main(String[] args) {
        //实例化一个对象  new
        Person person = new Person();
        System.out.println(person.name);
        //person.show();
    }
}*/

public class TestDemo {
    public static void main(String[] args) {
        MyArrayList myArrayList = new MyArrayList();
        myArrayList.add(0,5) ;
        myArrayList.add(1,6) ;
        myArrayList.add(2,6) ;
        myArrayList.add(0,12) ;
        myArrayList.display();
    }
}