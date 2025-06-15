class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def size(self):
        return len(self.items)

    def peek(self):
        if len(self.items) == 0:
            return None
        return self.items[len(self.items) - 1]

    def pop(self):
        if len(self.items) == 0:
            return None
        last = self.items[len(self.items) - 1]
        del self.items[len(self.items) - 1]    
        return last