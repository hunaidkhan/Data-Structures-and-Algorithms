# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        current = head
        stack = []
        while current:
            stack.append(current)
            current = current.next
        #pop until you reach nth element
        delNode = None
        while n > 0:
            delNode = stack.pop() 
            n -= 1
        if stack:
            #delete the node
            prev = stack.pop()
            prev.next = delNode.next
            return head
        else:
            return delNode.next if delNode.next else None
    

#   [1,2,3,4] n=1   after=5, delNode=4, prev=3
# [1] n=1 