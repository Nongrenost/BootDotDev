from l5_node import Node


class LinkedList:
    def add_to_tail(self, node):
        if self.head is None:
            self.head = node
        else:
            tail = None
            for next_node in self:
                tail = next_node
            tail.set_next(node)
                

    # don't touch below this line

    def __init__(self):
        self.head = None

    def __iter__(self):
        node = self.head
        while node is not None:
            yield node
            node = node.next

    def __repr__(self):
        nodes = []
        for node in self:
            nodes.append(node.val)
        return " -> ".join(nodes)
