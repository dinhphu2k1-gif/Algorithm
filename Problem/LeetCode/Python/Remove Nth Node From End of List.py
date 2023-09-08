# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def removeNthFromEnd(self, head, n: int) :
        # def index(node):
        #     if not node:
        #         return 0
        #     i = index(node.next) + 1
        #     if i > n:
        #         node.next.val = node.val
        #     return i
        # index(head)
        # return head.next
        fast = slow = head
        for _ in range(n):
            fast = fast.next
        if not fast:
            return head.next
        while fast.next:
            fast = fast.next
            slow = slow.next
        slow.next = slow.next.next
        return head