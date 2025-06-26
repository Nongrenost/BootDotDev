class BSTNode:
    def height(self):
        if self.val is None:
            return 0
        
        l_subtree_height = 0
        r_subtree_height = 0
        
        if self.left is not None:
            l_subtree_height = self.left.height()
        if self.right is not None:
            r_subtree_height = self.right.height()
        
        height = 1 + max(l_subtree_height, r_subtree_height)
        
        return height

    # don't touch below this line

    def __init__(self, val=None):
        self.left = None
        self.right = None
        self.val = val

    def insert(self, val):
        if not self.val:
            self.val = val
            return

        if self.val == val:
            return

        if val < self.val:
            if self.left:
                self.left.insert(val)
                return
            self.left = BSTNode(val)
            return

        if self.right:
            self.right.insert(val)
            return
        self.right = BSTNode(val)
