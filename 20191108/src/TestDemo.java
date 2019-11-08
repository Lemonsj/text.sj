public class TestDemo {
    public static void main(String[] args) {
        MySingleList mySingleList = new MySingleList();
        mySingleList.addFirst(1);
        mySingleList.addFirst(2);
        mySingleList.addFirst(3);
        mySingleList.addLast(0);
        mySingleList.addIndex(0,5);
        mySingleList.addIndex(5,6);
        System.out.println(mySingleList.contains(5));
        mySingleList.remove(5);
        mySingleList.display();
    }
}
