import java.util.Currency;

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
    /*public void display() {
        ListNode cur = this.head;
        while(cur != null) {
            System.out.println(cur.data);
            cur = cur.next;
        }
    }*/
    /*public void addFirst(int data) {
        ListNode node = new ListNode(data);
        if(this.head == null) {
            this.head = node;
            return;
        }else {
            node.next = this.head;
            this.head = node;
        }

    }
    public ListNode searchPrev(int key) {
        ListNode cur = this.head;
        while(cur.next != null) {
            if(cur.next.data == key) {
                return cur;
            }
            cur = cur.next;
        }
        return null;
    }
    //删除第一次出现关键字为key的节点
    public void remove(int key) {
        if(this.head.data == key) {
            this.head = this.head.next;
            return;
        }
        ListNode prev = searchPrev(key);
        if(prev == null){
            System.out.println("该数字不存在！");
            return;
        }
        ListNode del = prev.next;
        prev.next = del.next;
    }
    //删除所有
    public void removeAllKey(int key) {
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

    }*/
    public void addFirst(int data) {
        ListNode node = new ListNode(data);
        if(this.head == null) {
            this.head = node;
            return;
        }else {
            node.next = this.head;
            this.head = node;
        }
    }
    public ListNode searchPrev(int key) {
        ListNode cur = this.head;
        while(cur.next != null) {
            if(cur.next.data == key) {
                return cur;
            }
            cur = cur.next;
        }
        return cur;
    }
    public void remove(int key) {
        if(this.head.data == key) {
            this.head = this.head.next;
            return;
        }else {
            ListNode prev = searchPrev(key);
            if(prev == null) {
                System.out.println("该数字不存在！");
                return;
            }else {
                ListNode del = prev.next;
                prev.next = del.next;
            }

        }
    }
    public void removeAllKey(int key) {
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
    //反转单链表
    /*public ListNode reverseList() {
        ListNode prev = null;
        ListNode newHead = null;
        ListNode cur = this.head;
        while(cur != null) {
            ListNode curNext = cur.next;
            if(cur.next == null) {
                newHead = cur;
            }
            cur.next = prev;
            prev = cur;
            cur = curNext;
        }
        return newHead;
    }*/

    public ListNode reverseList() {
        ListNode prev = null;
        ListNode cur = this.head;
        ListNode newHead = null;
        while(cur != null) {
            ListNode curNext = cur.next;
            if(cur.next == null) {
                newHead = cur;
            }
            cur.next = prev;
            prev = cur;
            cur = curNext;
        }
        return newHead;
    }

    //
    public void display(ListNode newHead) {
        if(newHead == null){
            ListNode cur = newHead;
            while(cur != null) {
                System.out.print(cur.data + " ");
                cur = cur.next;
            }

        }
    }


    public ListNode middleNode() {
        ListNode fast = this.head;
        ListNode slow = this.head;
        while(fast != null && fast.next.next != null) {
            fast = fast.next.next;
            slow = slow.next;
        }
        return slow;
    }


    public ListNode findKthTotail(int k) {
        ListNode fast = this.head;
        ListNode slow = this.head;
        while(k-1 > 0) {
          fast = fast.next;
          k--;
        }
        while(fast.next != null) {
            fast = fast.next;
            slow = slow.next;
        }
        return slow;
    }
}
