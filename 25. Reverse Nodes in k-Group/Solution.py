# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        grpPrev = dummy
        
        while True:
            kthNode = self.getKth(grpPrev, k)
            if not kthNode: 
                break
            grpNext = kthNode.next 
            #now reverse
            prev, curr = grpNext, grpPrev.next
            while curr != grpNext:
                temp = curr.next
                curr.next = prev
                prev = curr
                curr = temp
            tmp = grpPrev.next
            grpPrev.next = kthNode
            grpPrev = tmp
        return dummy.next
        
    def getKth(self, curr, k):
        while k>0 and curr:
            curr = curr.next
            k -= 1
        return curr
                

        

