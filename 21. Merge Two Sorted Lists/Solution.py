# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = temp = ListNode(0)
        while list1 != None and list2 != None: #1
            if list1.val < list2.val: #2
                temp.next = list1 #3
                list1 = list1.next #4
            else: 
                temp.next = list2
                list2 = list2.next
            temp = temp.next
        temp.next = list1 or list2  #5
        return dummy.next #6