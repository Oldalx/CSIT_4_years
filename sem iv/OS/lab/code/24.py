pages = [1, 2, 3, 4, 1, 2, 5, 1, 2, 3, 4, 5]
frames = 3

memory = []
ref = []
ptr = 0
faults = 0

for p in pages:
    if p in memory:
        ref[memory.index(p)] = 1
    else:
        faults += 1

        if len(memory) < frames:
            memory.append(p)
            ref.append(1)
        else:
            while ref[ptr] == 1:
                ref[ptr] = 0
                ptr = (ptr + 1) % frames

            memory[ptr] = p
            ref[ptr] = 1
            ptr = (ptr + 1) % frames

    print(memory)

print("Page Faults =", faults)