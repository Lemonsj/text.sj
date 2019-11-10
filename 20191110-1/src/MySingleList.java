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
    public void display() {
        ListNode cur = this.head;
        while(cur != null) {
            System.out.println(cur.data);
            cur = cur.next;
        }
    }
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
    public void display2(ListNode newHead) {
        if(newHead == null) {
            return;
        }
            ListNode cur = newHead;
            while(cur != null) {
                System.out.print(cur.data + " ");
                cur = cur.next;
            }
    }


    public ListNode middleNode1() {
        ListNode fast = this.head;
        ListNode slow = this.head;
        while(fast != null && fast.next!= null) {
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

    /*public ListNode reverList() {
        ListNode prev = null;
        ListNode newHead = null;
        ListNode cur = this.head;
        while(cur != null) {
            ListNode curNext = cur.next;
            if(cur.next == null) {
                cur = newHead;
            }
            cur.next = prev;
            prev = cur;
            cur = curNext;

        }
        return newHead;
    }*/

    //以x为基准分割链表

/*    public ListNode partition(int x){
        ListNode bs = null;
        ListNode be = null;
        ListNode as = null;
        ListNode ae = null;
        ListNode cur = this.head;
        while (cur != null) {
            if (cur.data < x) {
                //是不是第一次插入
                if (bs == null) {
                    bs = cur;
                    be = bs;
                    cur = cur.next;
                } else {
                    be.next = cur;
                    be = be.next;
                    cur = cur.next;
                }
            } else {
                //是不是第一次插入
                if (as == null) {
                    as = cur;
                    ae = as;
                    cur = cur.next;

                } else {
                    ae.next = cur;
                    ae = ae.next;
                    cur = cur.next;
                }
            }
        }*/
        /*public ListNode deleteDuplication(){
            ListNode cur = this.head;
            ListNode newHead = new ListNode(-1);
            ListNode tmp = newHead;
            while (cur != null) {
                //重复的节点
                if(cur.next != null
                        && cur.data == cur.next.data) {
                    //每一次都需要判断cur.next
                    while(cur.next != null && cur.data == cur.next.data) {
                        cur = cur.next;
                    }
                    cur = cur.next;

                }else {
                    tmp.next = cur;
                    tmp = tmp.next;
                    cur = cur.next;

                }
            }
            //如果最后一个节点也是重复的
            tmp.next = null;
            return newHead.next;
        }*/

        public ListNode middleNode(){
            ListNode fast = this.head;
            ListNode slow = this.head;

            while(fast != null && fast.next != null) {
                fast = fast.next.next;
                slow = slow.next;
            }
            return slow;
        }

    /*public ListNode partition(int x) {

            ListNode bs = null;
            ListNode be = null;
            ListNode as = null;
            ListNode ae = null;
            ListNode cur = this.head;

            while(cur != null) {
                if(cur.data < x) {
                    if(bs ==null) {
                        bs = cur;
                        be = bs;
                        //cur = cur.next;
                    }else {
                        be.next = cur;
                        be = be.next;
                        //cur = cur.next;
                    }

                }else {
                    if(as == null) {
                        as = cur;
                        ae = as;
                        //cur = cur.next;
                    }else {
                        ae.next = cur;
                        ae = ae.next;
                        //cur = cur.next;
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
    }*/

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

    public ListNode deleteDuplication() {
        if(this.head == null) {
            return null;
        }
        ListNode cur = this.head;
        ListNode newHead = new ListNode(-1);
        ListNode tmp = newHead;

        while(cur != null) {
            //重复的节点
            if(cur.next != null && cur.data == cur.next.data) {
                while(cur.next != null && cur.data == cur.next.data) {
                    cur = cur.next;
                }
                cur = cur.next;
            }else {
                tmp.next = cur;
                tmp = tmp.next;
                cur = cur.next;
            }
        }
        tmp.next = null;
        return newHead.next;
    }
    //判断链表是否为回文结构
    public boolean chkPalindrome() {
        if(this.head == null) {
            return false;
        }
        if(this.head.next == null) {
            return true;
        }
        //1、找到单链表的中间节点
        ListNode fast = this.head;
        ListNode slow = this.head;
        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
        }
        //2、反转单链表
        ListNode cur = slow.next;
        while (cur != null) {
            ListNode curNext = cur.next;
            cur.next = slow;
            slow = cur;
            cur = curNext;
        }
        //3、fast/slow往前    head往后走
        while(this.head != slow) {
            if(this.head.data != slow.data) {
                return false;
            }
            //偶数情况下的判断
            if(this.head.next == slow) {
                return true;
            }
            this.head = this.head.next;
            slow = slow.next;
        }
        return true;
    }


    public void creteLoop() {
        ListNode cur = this.head;
        while(cur != null) {
            cur = cur.next;
        }
        cur = this.head.next.next;
    }
    //判断单链表是否有环
/*    public boolean hasCycle() {
        ListNode fast = this.head;
        ListNode slow = this.head;
        while(fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            if(fast == slow) {
                 return true;
            }
        }
        return false;
    }*/
    public ListNode detectCycle() {
        ListNode fast = this.head;
        ListNode slow = this.head;
        while(fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            if (fast == slow) {
                break;
            }
        }
        if(fast == null || fast.next == null) {
            System.out.println("没有环！");
            return null;
        }

        slow = this.head;
        while (fast != slow) {
            fast = fast.next;
            slow = slow.next;
        }
        return fast;
    }
}

