class Graph:
    def breadth_first_search(self, v):
        visited = []
        to_be_explored = []
        
        to_be_explored.append(v)
    
        while to_be_explored:
            
            first_in_queue = to_be_explored[0]
            visited.append(first_in_queue)
            to_be_explored = to_be_explored[1:]

            neighbours = sorted(self.graph[first_in_queue])
            for neighbour in neighbours:
                if neighbour not in visited and neighbour not in to_be_explored:
                    to_be_explored.append(neighbour)
        return visited
        
        
        
        
        

    # don't touch below this line

    def __init__(self):
        self.graph = {}

    def add_edge(self, u, v):
        if u in self.graph.keys():
            self.graph[u].add(v)
        else:
            self.graph[u] = set([v])
        if v in self.graph.keys():
            self.graph[v].add(u)
        else:
            self.graph[v] = set([u])

    def __repr__(self):
        result = ""
        for key in self.graph.keys():
            result += f"Vertex: '{key}'\n"
            for v in sorted(self.graph[key]):
                result += f"has an edge leading to --> {v} \n"
        return result
