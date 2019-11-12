public class TestDemo {

    public ListNode mergeTwoLists(ListNode headA, ListNode headB) {
        ListNode node = new ListNode(-1);
        ListNode tmp = node;
        while(headA != null && headB != null) {
            if(headA.data < headB.data) {
                tmp.next = headA;
                headA = headA.next;
                tmp = tmp.next;
            }else {
                tmp.next = headB;
                headB = headB.next;
                tmp = tmp.next;
            }
        }

        if(headA == null) {
            tmp.next = headB;
        }
        if(headB == null) {
            tmp.next = headA;
        }
        return node;
    }

    //合并两个有序数组


    //求相交节点
    public ListNode getIntersectionNode
            (ListNode headA, ListNode headB) {
        if(headA == null || headB == null) {
            return null;
        }

        ListNode pL = headA;//永远指向长的单链表
        ListNode pS = headB;//永远指向短的单链表

        int lenA = 0;
        int lenB = 0;

        //求的lenA  lenB
        while (pL != null) {
            lenA++;
            pL = pL.next;
        }

        //差值-》最长的单链表先走len步
        int len = lenA-lenB;
        if(len < 0) {
            pL = headB;
            pS = headA;
            len = lenB-lenA;
        }
        pL = headA;
        pS = headB;

        //让pL先走len步
        while(len > 0) {
            pL = pL.next;
            len--;
        }
        //开始一起走  (pL  != pS ) {一人一步走}
        while( pL != pS) {
            pL = pL.next;
            pS = pS.next;
        }
        /*if(pL == pS && pL == null)
        {
            return null;
        }*/
        return pL;
    }
}
