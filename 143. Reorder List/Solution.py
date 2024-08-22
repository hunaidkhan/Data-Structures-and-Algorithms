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
        #find mid point of array using slow,fast method - fast pointer moves double the rate of slow so when slow is at mid fast will be at the end
        slow,fast= head, head.next
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next 
        half2 = slow.next
        slow.next = None #end of the result list
        #reverse linked list
        prev, current = None, half2
        while current:
            temp = current.next
            current.next = prev
            prev = current
            current = temp
        
        #merge the two lists
         
        first, second = head, prev #in the for loop prev pointer stops at last element which is the first after reversing
        while second:
            temp1, temp2 = first.next, second.next
            first.next = second
            second.next = temp1
            first, second = temp1, temp2


        