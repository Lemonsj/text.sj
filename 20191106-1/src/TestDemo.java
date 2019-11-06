public class TestDemo {
    public static void main(String[] args) {
        MarryList marryList = new MarryList();
        marryList.add(0,1);
        marryList.add(1,2);
        marryList.add(2,3);
        System.out.println("*******************");
        System.out.println(marryList.contains(0));
        System.out.println(marryList.contains(3));
        System.out.println("*******************");
        System.out.println(marryList.search(3));
        System.out.println("*******************");
        System.out.println(marryList.getpos(2));
        System.out.println("*******************");
        marryList.setPos(2,4);
        System.out.println("*******************");
        marryList.display();


    }
}
