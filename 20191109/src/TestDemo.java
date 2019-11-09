public class TestDemo {
    public static void main(String[] args) {
        MySingleList mySingleList = new MySingleList();
        mySingleList.addFirst(3);
        mySingleList.addFirst(2);
        mySingleList.addFirst(1);
        //mySingleList.addFirst(2);
        //mySingleList.remove(3);
        mySingleList.display();
        /*System.out.println("**********************************");
        mySingleList.removeAllKey(2);
        mySingleList.display();*/
    }
}
