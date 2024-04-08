#Floyds-cycle-finding-algorithm

class Node:
    def init(self, val=None, nxt=None):
        self.val = val
        self.nxt = nxt

class LinkedList:
    def init(self, head=None):
        self.head = head

def cycle(llist):
    ptr = llist.head
    visited = set()
    while ptr is not None:
        if ptr in visited:
            return ptr
        else:
            visited.add(ptr)
            ptr = ptr.nxt
    return None

def cycle(llist):
    slow = llist.head
    fast = llist.head
    met = False
    while fast is not None and fast.nxt is not None:
        slow = slow.nxt
        fast = fast.nxt.nxt
        if slow == fast:
            met = True
            break
    if not met:
        return None
    else:
        slow = llist.head
        while slow != fast:
            slow = slow.nxt
            fast = fast.nxt
    return slow

def find_duplicate(arr):
    visited = set()
    for elem in arr:
        if elem in visited:
            return elem
        else:
            visited.add(elem)

def find_duplicate(arr):
    slow = 0
    fast = 0
    while True:
        slow = arr[slow]
        fast = arr[arr[fast]]
        if slow == fast:
            break
    slow = 0
    while slow != fast:
        slow = arr[slow]
        fast = arr[fast]
    return slow