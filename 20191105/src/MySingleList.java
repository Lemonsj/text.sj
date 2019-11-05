class ListNode {
    public int data;
    public ListNode next;
    public ListNode(int data) {
        this.data = data;
        this.next = null;
    }
}
class MySingleList {
    public ListNode head;
    public MySingleList() {
        this.head = null;
    }
    //删除所有值为K的节点
    //反转单链表
    public ListNode reverseList() {
        ListNode prev = this.head;
        ListNode newHead = null;
        ListNode cur = this.head;
        while(cur != null) {
            ListNode curNext = cur.next;
            if(curNext == null) {
                newHead = cur;
            }

            cur.next = prev;
            prev = cur;
            cur = curNext;
        }
        return newHead;
    }
    //求链表中间的数据
    public int Length() {
        ListNode cur = this.head;
        int count = 0;
        while(cur != null) {
            count++;
            cur = cur.next;
        }
        return count;
    }
    public ListNode middleNode1() {
        int length = Length();
        ListNode cur = this.head;
        int i = 0;
        while(i < length/2) {
            cur = cur.next;
            i++;
        }
        return cur;
    }
    public ListNode middleNode() {
        ListNode fast = this.head;
        ListNode slow = this.head;
        while(fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
        }
        return slow;
    }

    //倒数第k个节点
    public ListNode findKthTail (int k) {
        /*if(k <= 0 || k > Length()) {
            System.out.println("该节点不存在！");
            return null;
        }*/
        if(k <= 0 || this.head == null) {
            System.out.println("该节点不存在！");
            return null;
        }
        ListNode fast = this.head;
        ListNode slow = this.head;
        int count = 0;
        while(count < k-1) {
            fast = fast.next;
            count++;
        }
        while(fast.next != null) {
            fast = fast.next;
            slow = slow.next;
        }
        return slow;
    }

}
