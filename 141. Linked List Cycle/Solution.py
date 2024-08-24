# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        hmap = {}
        curr = head
        while curr:
            if curr in hmap: return True
            hmap[curr] = True
            curr = curr.next
        return False