class ListNode {
    public int data;
    public ListNode next;
    public ListNode(int data) {
        this.data = data;
        this.next = null;
    }
}
class MySingleList {
    private ListNode head;
    public MySingleList() {
        this.head = null;
    }
    //头插法
    public void addFirst(int data) {
        ListNode node = new ListNode(data);
        if(this.head == null) {
            this.head = node;
        }else {
            node.next = this.head;
            this.head = node;
        }

    }
    //打印链表
    public void display() {
        ListNode cur = this.head;
        while(cur != null) {
            System.out.println(cur.data);
            cur = cur.next;
        }
    }
    //尾插法
    public void addLast(int data) {
        ListNode node = new ListNode(data);
        ListNode cur = this.head;
        if(this.head == null) {
            this.head = node;
        }else {
            while(cur.next != null) {
                cur = cur.next;
            }
            cur.next = node;
        }

    }
    public int getLength() {
        int count = 0;
        ListNode cur = this.head;
        while(cur != null) {
            cur = cur.next;
            count++;
        }
        return count;
    }
    public ListNode searchIndex(int index) {
        ListNode prev = this.head;
        int count = 0;
        while(count <index-1) {
            prev = prev.next;
            count++;
        }
        return prev;
    }
    //任意位置插入，第一个节点为0号下标
    public boolean addIndex(int index, int data) {
        if(index < 0 || index > getLength()) {
            System.out.println("该位置不合法！");
            return false;
        }
        if(index == 0) {
            addFirst(data);
            return true;
        }
        ListNode node = new ListNode(data);
        ListNode prev = searchIndex(index);
        node.next = prev.next;
        prev.next = node;
        return true;

    }
    //查找是否包含关键字KEY
    public boolean contains(int key) {
        ListNode cur = this.head;
        while(cur != null) {
            if(cur.data == key) {
                return true;
            }
            cur = cur.next;
        }
        return false;
    }
    //删除第一次出现关键字为K的节点
    public void remove(int key) {
        ListNode cur = this.head;
        if(this.head.data == key) {
            this.head = this.head.next;
            return;
        }
        ListNode prev = searchIndex(key);
        if(prev == null) {
            System.out.println("没有要删除的节点！");
            return;
        }
        ListNode del = prev.next;
        prev.next = del.next;
    }
    //删除所有的节点


}
