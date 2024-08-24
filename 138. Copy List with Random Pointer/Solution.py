"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        curr = head
        new = None
        hmap = {None: None}
        while curr:
            new = ListNode(curr.val)
            hmap[curr] = new
            curr = curr.next
        curr = head
        while curr:
            copied = hmap[curr]
            copied.next = hmap[curr.next]
            copied.random = hmap[curr.random]
            curr = curr.next
        return hmap[head]
        