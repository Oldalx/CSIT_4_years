pages = [1, 2, 3, 4, 1, 2, 5, 1, 2, 3, 4, 5]
frames = 3

memory = []
faults = 0

for p in pages:
    if p not in memory:
        faults += 1

        if len(memory) < frames:
            memory.append(p)
        else:
            memory.pop(0)
            memory.append(p)
    else:
        memory.remove(p)
        memory.append(p)

    print(memory)

print("Page Faults =", faults)