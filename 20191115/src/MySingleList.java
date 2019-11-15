/*
class MySingleList {
    public Node copyRandomList(Node head) {
        if(head == null){
            return null;
        }

        //1、老新进行进行交替链接
        Node cur = head;
        while(cur != null) {
            Node node = new Node(cur.val,cur.next,null);
            Node tmp = cur.next;
            cur.next = node;
            cur = tmp;
        }
        //2、修改random
        cur = head;
        while(cur != null) {
            if(cur.random != null) {
                cur.next.random = cur.random.next;
                cur = cur.next.next;
            }else{
                cur = cur.next.next;
            }
        }
        //3、将老新节点 打开
        cur = head;
        Node newHead = cur.next;
        while(cur.next != null) {
            Node tmp = cur.next;
            cur.next = tmp.next;
            cur = tmp;
        }
        return newHead;
    }
}
*/
