# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        q=deque()
        p=head.next
        while p:
            q.append(p)
            p=p.next
        p=head
        while len(q):
            p.next=q.pop()
            p=p.next
            if len(q):
                p.next=q.popleft()
                p=p.next
        p.next=None   
            
        
        