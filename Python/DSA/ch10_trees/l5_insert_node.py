class BSTNode:
    def __init__(self, val=None):
        self.left = None
        self.right = None
        self.val = val

    def insert(self, val):
        if self.val is None:
            self.val = val
            return
        if self.val == val:
            return
        if val < self.val:
            if self.left is None:
                self.left = BSTNode(val)
                return
            self.left.insert(val)
            return
        if self.right is None:
            self.right = BSTNode(val)
            return
        self.right.insert(val)
        
        