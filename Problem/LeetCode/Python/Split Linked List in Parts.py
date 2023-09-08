# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def splitListToParts(self, head, k):
        cur = head
        number = 0
        while cur:
            number += 1
            cur = cur.next

        res = []
        width, remainder = divmod(number, k)

        cur = head
        for i in range(k):
            root = cur
            for j in range(width + (remainder > 0) - 1):
                if cur: cur = cur.next
            if cur: 
                cur.next, cur = None, cur.next
            
            res.append(root)
            remainder -= 1 #
        
        return res


