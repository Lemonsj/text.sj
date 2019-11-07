public class TestDemo {
    public static void main(String[] args) {
        MySingleList mySingleList = new MySingleList();
        mySingleList.addFirst(1);
        mySingleList.addFirst(2);
        mySingleList.addFirst(3);
        System.out.println("***********************");
        mySingleList.addLast(0);
        System.out.println("***********************");

        mySingleList.display();

    }
}
