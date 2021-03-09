class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

root = Node(1)
root.left = Node(3)
root.right = Node(6)

root.left.left = Node(1)
root.left.right = Node(9)