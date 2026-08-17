import heapq

graph = {
    'A': [('B', 1), ('C', 4), ('D', 3)],
    'B': [('E', 2)],
    'C': [('E', 1), ('F', 5)],
    'D': [('F', 6)],
    'E': [('F', 1)],
    'F': []
}

heuristic = {'A': 7, 'B': 6, 'C': 2, 'D': 4, 'E': 1, 'F': 0}

def a_star(start, goal):
    open_set = [(heuristic[start], 0, start, [start])]
    visited = set()
    while open_set:
        f, g, node, path = heapq.heappop(open_set)
        if node == goal:
            return path
        if node in visited:
            continue
        visited.add(node)
        for neighbor, cost in graph[node]:
            if neighbor not in visited:
                new_g = g + cost
                new_f = new_g + heuristic[neighbor]
                heapq.heappush(open_set, (new_f, new_g, neighbor, path + [neighbor]))
    return None

print("Graph adjacency list with costs:")
for node, neighbors in graph.items():
    print(node, "->", neighbors)

path = a_star('A', 'F')
if path:
    print("Shortest path from start to goal using A* Search:")
    print(" -> ".join(path))
else:
    print("No path found from start to goal.")
