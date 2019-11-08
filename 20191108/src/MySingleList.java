class ListNode {
    public int data;
    public ListNode next;
    public ListNode(int data) {
        this.data = data;
        this.next = null;
    }
}
class MySingleList {
    ListNode head;
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
    //**********************************************************
    //尾插法
    public void addLast(int data) {
        ListNode node = new ListNode(data);
        ListNode cur  = this.head;
        if(this.head == null) {
            this.head = node;
            return;
        }
        while(cur.next != null) {
            cur = cur.next;
        }
        cur.next = node;

    }
    //**********************************************************
    public ListNode searchIndex(int index) {
        ListNode cur = this.head;
        int i = 0;
        while(i < index -1) {
            cur = cur.next;
            i++;
        }
        return cur;
    }
    public int getLength() {
        ListNode cur = this.head;
        int count = 0;
        while(cur != null) {
            count++;
            cur = cur.next;
        }
        return count;
    }
    //任意位置插入，第一个数据节点为0号下标
    public boolean addIndex(int index,int data) {
        ListNode node = new ListNode(data);
        if(index < 0 || index >getLength()) {

        }
        if(index == 0) {
            addLast(data);
            return true;
        }
        ListNode prev = searchIndex(index);
        node.next = prev.next;
        prev.next = node;
        return false;
    }
    //**********************************************************
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
    //**********************************************************
    //删除第一次出现关键字key的节点
    public ListNode searchPrev(int key) {
        ListNode prev = this.head;
        while(prev.next != null) {
            if(prev.next.data == key) {
                return prev;
            }
        }
        return null;
    }
    public void remove(int key) {
        if(this.head.data == key) {
            this.head = this.head.next;
            return;
        }
        ListNode prev = searchPrev(key);
        if(prev == null) {
            System.out.println("找不到该关键字！");
            return;
        }
        ListNode del = prev.next;
        prev.next = del.next;
        //prev.next = prev.next.next;
    }
    //*****************************************************************
    public void removeAllkey(int key){
        ListNode prev = this.head;
        ListNode cur = this.head.next;
        while(cur != null) {
            if(prev.next.data == key) {
                prev.next = cur.next;
                cur = cur.next;
            }else {
                prev = cur;
                cur = cur.next;
            }
        }
        if(this.head.data == key) {
            this.head = this.head.next;
        }
    }

    public void clear() {
        while(this.head.next != null) {
            ListNode cur = this.head.next;
            this.head.next = cur.next;
        }
        this.head = null;
    }


}











