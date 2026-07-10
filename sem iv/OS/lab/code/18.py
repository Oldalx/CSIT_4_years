blocks = [100, 500, 200, 300, 600]
processes = [212, 417, 112, 426]

for p in processes:
    best = -1

    for i in range(len(blocks)):
        if blocks[i] >= p:
            if best == -1 or blocks[i] < blocks[best]:
                best = i

    if best != -1:
        print("Process", p, "-> Block", best + 1)
        blocks[best] -= p
    else:
        print("Process", p, "-> Not Allocated")