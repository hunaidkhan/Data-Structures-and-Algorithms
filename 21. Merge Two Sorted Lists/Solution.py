# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        #in place sorting
        #check for lower head value
        if not list1: return list2
        if not list2: return list1
        if list1.val > list2.val:
            list1, list2 = list2, list1 #swapping so list1 is always smaller head at first
        if not list1.next:
            list1.next = list2
            return list1
        curr1, curr2 = list1, list2
        while curr2 and curr1.next:
            if curr2.val >= curr1.val and curr2.val <= curr1.next.val:
                #swapping
                temp = curr1.next 
                curr1.next = curr2
                newCurr2 = curr2.next
                curr2.next = temp
                #moving pointers ahead
                curr2 = newCurr2
                curr1 = curr1.next
            else:
                if curr1.next.next:
                    curr1 = curr1.next
                else:
                    curr1.next.next = curr2
                    return list1
        return list1
      
            

1-2-3-4-4-4
6
curr1=4
curr2=6

        
        