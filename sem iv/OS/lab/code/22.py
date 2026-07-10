pages = [1, 2, 3, 4, 1, 2, 5, 1, 2, 3, 4, 5]
frames = 3

memory = []
count = {}
faults = 0

for p in pages:
    count[p] = count.get(p, 0) + 1

    if p not in memory:
        faults += 1

        if len(memory) < frames:
            memory.append(p)
        else:
            victim = min(memory, key=lambda x: count[x])
            memory[memory.index(victim)] = p

    print(memory)

print("Page Faults =", faults)