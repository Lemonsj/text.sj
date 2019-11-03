
public class TestDemo2 {

}
class ListNode {
    public int data;
    public ListNode next;
    public ListNode(int data) {
        this.data = data;
        this.next = null;
    }
}
class MySingleList {

    public ListNode head;//标志头

    public MySingleList() {
        this.head = null;

    }

    //头插法
    public void addFirst(int data){
        ListNode node = new ListNode(data);
        if(this.head == null) {
            this.head = node;
        }else {
            node.next = this.head;
            this.head = node;
        }
    }
    //尾插法
    public void addlLast(int data) {
        ListNode node = new ListNode(data);
        ListNode cur = this.head;
        if(this.head == null) {
            this.head = node;
        }else {
            //找尾巴
            while(cur.next != null) {
                cur  = cur.next;
            }
            //进行插入
            cur.next = node;
        }
    }
    //打印单链表数据
   // public
    private ListNode searchIndex(int index) {
        ListNode prev = this.head;
        int i = 0;
        while(i<=index-1){
            prev = prev.next;
            i++;
        }
        return prev;
    }
    //插入到index位置
    //任意位置插入,第一个数据节点为0号下标
    public boolean addIndex(int index,int data){
        ListNode node = new ListNode(data);
        if(index == 0) {
            addFirst(data);
            return true;
        }
        ListNode prev = searchIndex(index);
        node.next = prev.next;
        prev.next = node;
        return false;
    }
    //删除第一次出现关键字为key的节点


    private ListNode searchPrev(int key) {
        ListNode prev = this.head;
        while(prev.next != null) {
            if(prev.next.data == key) {
                return prev;
            }
            prev = prev.next;
        }
        return null;
    }
    //删除第一次出现关键字为key的节点
    public void remove(int key){
        //1、删除的节点如果是头结点

        //2、找到删除的节点的前驱  如果找不到  返回null

        //3、进行删除
        if(this.head.data == key) {
            this.head = this.head.next;
            return;
        }
        ListNode prev = searchPrev(key);
        if(prev == null) {
            System.out.println("没有要删除的节点");
            return;
        }

    }
    //删除所有关键字为key的节点
    public void remove2 (int key) {
        ListNode prev = this.head;
        ListNode cur = this.head.next;
        while(cur != null) {
            if(prev.next.data == key) {
                prev.next = cur.next;
                cur = cur.next;
            }else {
                cur = cur.next;
                prev = prev.next;
            }
        }
        if(this.head.data == key) {
            this.head = this.head.next;
        }
    }
}
