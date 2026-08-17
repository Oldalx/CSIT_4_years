def minimax(depth, node_index, is_maximizing, values, max_depth):
    if depth == max_depth:
        return values[node_index]

    if is_maximizing:
        left = minimax(depth + 1, node_index * 2, False, values, max_depth)
        right = minimax(depth + 1, node_index * 2 + 1, False, values, max_depth)
        return max(left, right)
    else:
        left = minimax(depth + 1, node_index * 2, True, values, max_depth)
        right = minimax(depth + 1, node_index * 2 + 1, True, values, max_depth)
        return min(left, right)

values = [3, 5, 2, 9]
max_depth = 2
optimal_value = minimax(0, 0, True, values, max_depth)
print("The optimal value is:", optimal_value)
