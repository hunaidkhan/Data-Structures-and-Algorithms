class Node:
    def __init__(self, key, val):
        self.key = key
        self.val = val
        self.prev, self.next = None, None
class LRUCache:
#have an array that adds node to linked list in every get operation
    def __init__(self, capacity: int):
        self.capacity = capacity
        self.hmap = {}
        #self.left=LRU, self.right = MRU
        self.left, self.right = Node(0,0), Node(0,0)
        self.left.next, self.right.prev = self.right, self.left

    def remove(self, node):
        prv, nxt = node.prev, node.next
        prv.next = nxt
        nxt.prev = prv
    
    def insert(self, node):
        temp = self.right.prev 
        self.right.prev = node
        temp.next = node
        node.prev, node.next = temp, self.right
        
    def get(self, key: int) -> int:
        if key in self.hmap:
            #update the left and right pointer
            self.remove(self.hmap[key])
            self.insert(self.hmap[key])
            return self.hmap[key].val
        return -1

    def put(self, key: int, value: int) -> None:
        if key in self.hmap:
            self.hmap[key].value = value
            self.remove(self.hmap[key])
        self.hmap[key] = Node(key, value)
        self.insert(self.hmap[key])

        if len(self.hmap) > self.capacity:
            #remove lru
            temp = self.left.next
            self.remove(temp)
            del self.hmap[temp.key]



# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)