blocks = [100, 500, 200, 300, 600]
processes = [212, 417, 112, 426]

for p in processes:
    worst = -1

    for i in range(len(blocks)):
        if blocks[i] >= p:
            if worst == -1 or blocks[i] > blocks[worst]:
                worst = i

    if worst != -1:
        print("Process", p, "-> Block", worst + 1)
        blocks[worst] -= p
    else:
        print("Process", p, "-> Not Allocated")