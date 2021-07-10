/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if(headA==null||headB ==null) return null;
        // 如果 A 和 B一样长，一个一个loop则会找到answer
        // 如果不一样长， 把长的变短，让他们一样长则找到answer。
        // 因为他们有 一样的后缀， 如果在短的第一个位置intersect 也是符合条件的。
        // A X12345
        // B 012345 A少一个， AB intersect在1.
        int lenA = getLength(headA);
        int lenB = getLength(headB);

        if(lenA > lenB){
            for(int i = 0; i < lenA-lenB; ++i) headA = headA.next;
        }else{
            for(int i = 0; i < lenB-lenA; ++i) headB = headB.next;
        }
        while(headA != null && headB != null && headA != headB){
            headA = headA.next;
            headB = headB.next;
        }
        return (headA !=null) ? headA : null;
    }
    public int getLength(ListNode head){
        int cnt = 0;
        while(head != null){
            cnt ++;
            head = head.next;
        }
        return cnt;
    }
}
//运用闭环的思路
/*因为a+b = b+a的长度。

  A A1 C A3
  B B1 B2 C B4
  A1 C A3 B1 B2 C B4 null
  B1 B2 C B4 A1 C A3 null
  由此可见倒数第二个C 则找到了intersection。
  如果没有intersection 就return null。
  */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if (headA == null || headB == null) return null;
        ListNode a = headA, b = headB;
        while (a != b) {
            a = (a != null) ? a.next : headB;
            b = (b != null) ? b.next : headA;
        }
        return a;
    }
}
