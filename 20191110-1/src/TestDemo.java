public class TestDemo {
    public static void main(String[] args) {
        MySingleList mySingleList = new MySingleList();
        mySingleList.addLast(1);
        mySingleList.addLast(2);
        mySingleList.addLast(3);
        mySingleList.addLast(2);
        mySingleList.addLast(1);
        System.out.println(mySingleList.chkPalindrome());
        //ListNode node = mySingleList.deleteDuplication();
        //mySingleList.display2(node);
        //System.out.println("*******************************");
        //ListNode node = mySingleList.partition(3);
        //System.out.println("*******************************");
        //mySingleList.display2(node);


    }
}
