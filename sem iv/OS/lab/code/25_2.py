free_blocks = [1, 4, 5, 7]

print("Initial Free List:", free_blocks)

allocated = free_blocks.pop(0)

print("Allocated Block:", allocated)
print("Updated Free List:", free_blocks)