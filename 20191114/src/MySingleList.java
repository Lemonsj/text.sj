/*
import java.util.Random;

class ListNode{
    public int data;
    public ListNode next;
    public ListNode (int data){
        this.data = data;
        this.next = null;
    }
}

class MySingleList {
    		System.out.println(ret);
}
}


        12.
public class Test {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        int i = 0;
        for(i = 31; i>0; i-=2) {
            System.out.print((num>>i) & 1);
        }
        System.out.printf("\n");
        for(i = 30; i>=0; i-=2) {
            System.out.print((num>>i) & 1);
        }
    }
}




public class Test {
    public static void print(int n) {
        if(n>9) {
            print(n/10);
        }
        System.out.printf("%d\n", n%10);

    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        print(num);
    }
}


import java.util.Random;
public class Test {
    public static void main(String[] args) {
        Random random = new Random();
        Scanner scan = new Scanner(System.in);
        int x = random.nextInt(100);
        while(true) {
            System.out.println("Guessnum : ");
            int num = scan.nextInt();
            if(num < x) {
                System.out.println(" Small ! ");
            }else if(num > x) {
                System.out.println(" Big !");
            }else {
                System.out.println("Guess right !");
                break;
            }
        }
    }
}


public class Test {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println(" a is : ");
        int a = scan.nextInt();
        System.out.println(" b is : ");
        int b = scan.nextInt();
        int c = 1;
        while(c != 0) {

            c = a%b;
            a = b;
            b = c;
        }
        System.out.println(a);
    }
}
}
*/
