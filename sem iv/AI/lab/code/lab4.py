import heapq

adj_list = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [], 'E': [], 'F': []
}

heuristic = {'A': 5, 'B': 2, 'C': 3, 'D': 4, 'E': 1, 'F': 0}

def gbfs(start, goal):
    visited = set()
    pq = [(heuristic[start], start)]
    path = []
    while pq:
        h, node = heapq.heappop(pq)
        if node in visited:
            continue
        path.append(node)
        visited.add(node)
        if node == goal:
            break
        for neighbor in adj_list[node]:
            if neighbor not in visited:
                heapq.heappush(pq, (heuristic[neighbor], neighbor))
    return path

def display_adjacency_list():
    print("Adjacency List:")
    for node, neighbors in adj_list.items():
        print(node, "->", neighbors)

def main():
    display_adjacency_list()
    start = input("Enter start node: ").upper()
    goal = input("Enter destination node: ").upper()
    path = gbfs(start, goal)
    print(f"Path from {start} to {goal}:")
    print(" -> ".join(path))

main()
