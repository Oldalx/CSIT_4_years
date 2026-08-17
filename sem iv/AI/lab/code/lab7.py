from collections import deque

max_a, max_b = 5, 3

def is_goal(state):
    return state[0] == 1

def get_next_states(state):
    a, b = state
    successors = []
    successors.append((max_a, b))          # Fill Jug A
    successors.append((a, max_b))          # Fill Jug B
    successors.append((0, b))              # Empty Jug A
    successors.append((a, 0))              # Empty Jug B
    pour = min(a, max_b - b)
    successors.append((a - pour, b + pour))  # Pour A -> B
    pour = min(b, max_a - a)
    successors.append((a + pour, b - pour))  # Pour B -> A
    return successors

def water_jug_bfs(start_state):
    visited = set()
    queue = deque([(start_state, [start_state])])
    while queue:
        current, path = queue.popleft()
        if is_goal(current):
            return path
        for next_state in get_next_states(current):
            if next_state not in visited:
                visited.add(next_state)
                queue.append((next_state, path + [next_state]))
    return None

solution = water_jug_bfs((0, 0))
if solution:
    print("Step-by-step jug contents to goal state:")
    for step in solution:
        print(f"Jug A: {step[0]}L, Jug B: {step[1]}L")
else:
    print("No solution found")
