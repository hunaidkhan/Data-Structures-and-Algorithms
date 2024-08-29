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
            kth = self.getKth(grpPrev, k) 
            if not kth: #we have gotten beyond the list and k is not multiple of len of list
                break
            grpNext = kth.next #store it here since we are going to lose the kth.next later
            #reversing the k linked list
            prev, curr = kth.next, grpPrev.next
            while curr != grpNext:
                temp = curr.next
                curr.next = prev
                prev = curr
                curr = temp
            temp = grpPrev.next
            grpPrev.next = kth
            grpPrev = temp
        return dummy.next
    def getKth(self, curr, k):
        while curr and k > 0:
            curr= curr.next
            k -= 1
        return curr
        

