public class TestDemo {
    public static void main(String[] args) {
        MyArrayList myArrayList = new MyArrayList();
        myArrayList.add(0,1);
        myArrayList.add(1,2);
        myArrayList.add(2,3);
        //System.out.println(myArrayList.contains(4));
        //System.out.println(myArrayList.contains(2));
        myArrayList.remove(2);
        myArrayList.setPos(1,8);
        myArrayList.display();


    }
}
