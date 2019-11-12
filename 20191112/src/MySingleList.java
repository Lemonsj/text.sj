class ListNode {
    public int data;
    public ListNode next;
    public ListNode (int data) {
        this.data = data;
        this.next = null;
    }
}
class MySingleList {
    public ListNode head;
    public MySingleList() {
        this.head = null;
    }

    public void addFirst(int data) {
        ListNode node = new ListNode(data);
        if(this.head == null) {
            this.head = node;
        }else {
            node.next = this.head;
            this.head = node;

        }

    }
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

    //找前驱
    public ListNode searchPrevif(int key) {
        ListNode cur = this.head;
        while(cur.next != null) {
            if(cur.next.data == key) {
                return cur;
            }
            cur = cur.next;
        }
        return cur;
    }
    //删除链表中的关键字KEY
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
    //删除链表中的所有关键字KEY
    public void removeAllKey(int key) {
        ListNode prev = this.head;
        ListNode cur = this.head.next;
        while(cur != null) {
            if(prev.next.data == key) {
                prev.next = cur.next;
                cur = cur.next;
            }else {
                prev = cur;
                cur  = cur.next;
            }

        }
        if(this.head.data == key) {
            this.head = this.head.next;
        }
    }
    //反转单链表
    public ListNode reverseList() {
        ListNode cur = this.head;
        ListNode prev = null;
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
    //打印
    public void display() {
        ListNode cur = this.head;
        while(cur !=  null) {
            System.out.println(cur.data);
            cur = cur.next;
        }
    }
    public void display2(ListNode newHead) {
        if(newHead == null) {
            return;
        }
        ListNode cur = newHead;
        while(cur != null) {
            System.out.println(cur.data);
            cur = cur.next;
        }
    }

    //以x为基准分割链表
    public ListNode partition(int x) {
        ListNode bs = null;
        ListNode be = null;
        ListNode as = null;
        ListNode ae = null;
        ListNode cur = this.head;
        while(cur != null) {
            if(cur.data < x) {
                if(bs == null) {
                    bs = cur;
                    be = bs;
                }else {
                    be.next = cur;
                    be = be.next;
                }
            }else {
                if(as == null) {
                    as = cur;
                    ae = as;
                }else {
                    ae.next = cur;
                    ae = ae.next;
                }

            }
            cur = cur.next;
        }

        if(bs == null) {
            return as;
        }
        be.next = as;
        if(as != null) {
            ae.next = null;
        }
        return bs;
    }

    public ListNode findKthToTail(int k) {

        if(this.head == null) {
            return null;
        }
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
