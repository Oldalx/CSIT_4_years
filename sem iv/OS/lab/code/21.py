pages = [1, 2, 3, 4, 1, 2, 5, 1, 2, 3, 4, 5]
frames = 3

memory = []
faults = 0

for i in range(len(pages)):
    p = pages[i]

    if p not in memory:
        faults += 1

        if len(memory) < frames:
            memory.append(p)
        else:
            future = pages[i + 1:]
            idx = -1
            farthest = -1

            for j in range(len(memory)):
                if memory[j] not in future:
                    idx = j
                    break

                pos = future.index(memory[j])

                if pos > farthest:
                    farthest = pos
                    idx = j

            memory[idx] = p

    print(memory)

print("Page Faults =", faults)