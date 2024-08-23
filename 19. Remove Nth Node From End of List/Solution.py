# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        l = dummy
        r = head
        while r:
            if n > 0:
                r = r.next
                n -= 1
            else:
                l , r = l.next, r.next
        l.next = l.next.next
        return dummy.next
    


#   [1,2,3,4] n=1   after=5, delNode=4, prev=3
# [1] n=1 