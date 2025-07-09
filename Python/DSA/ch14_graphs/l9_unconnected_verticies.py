class Graph:
    def unconnected_vertices(self):
        users_with_no_connections = []
        for user in self.graph:
            if self.graph[user] == set():
                users_with_no_connections.append(user)
        return users_with_no_connections

    # don't touch below this line

    def __init__(self):
        self.graph = {}

    def add_edge(self, u, v):
        if u in self.graph:
            self.graph[u].add(v)
        else:
            self.graph[u] = {v}
        if v in self.graph:
            self.graph[v].add(u)
        else:
            self.graph[v] = {u}

    def add_node(self, u):
        if u not in self.graph:
            self.graph[u] = set()
