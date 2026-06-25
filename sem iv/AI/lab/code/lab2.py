adj_list = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': [],
    'F': []
}

READY = 1
WAITING = 2
VISITED = 3


def initialize_status(adj_list):
    return {node: READY for node in adj_list}


def dfs_search(start, dest, adj_list):
    stack = []
    final_path = []

    status = initialize_status(adj_list)

    stack.append(start)
    status[start] = WAITING

    while stack:
        current = stack.pop()

        final_path.append(current)
        status[current] = VISITED

        if current == dest:
            break

        for neighbor in adj_list[current]:
            if status[neighbor] == READY:
                stack.append(neighbor)
                status[neighbor] = WAITING

    return final_path


def display_adjacency_list(adj_list):
    print("\nAdjacency List")
    for node, neighbors in adj_list.items():
        print(f"{node} -> {neighbors}")


def main():
    print("Depth First Search (DFS)")
    display_adjacency_list(adj_list)

    start = input("\nEnter start node: ").upper()
    dest = input("Enter destination node: ").upper()

    if start not in adj_list or dest not in adj_list:
        print("Invalid Node!")
        return

    path = dfs_search(start, dest, adj_list)

    print(f"\nPath from {start} to {dest}")
    for node in path:
        print(f"{node} -> ", end="")
    print("End")


if __name__ == "__main__":
    main()