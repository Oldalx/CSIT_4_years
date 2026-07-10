blocks = [100, 500, 200, 300, 600]
processes = [212, 417, 112, 426]

j = 0

for p in processes:
    allocated = False

    for _ in range(len(blocks)):
        if blocks[j] >= p:
            print("Process", p, "-> Block", j + 1)
            blocks[j] -= p
            allocated = True
            break

        j = (j + 1) % len(blocks)

    if not allocated:
        print("Process", p, "-> Not Allocated")