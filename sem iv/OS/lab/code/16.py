blocks = [100, 500, 200, 300, 600]
processes = [212, 417, 112, 426]

for p in processes:
    allocated = False

    for i in range(len(blocks)):
        if blocks[i] >= p:
            print("Process", p, "-> Block", i + 1)
            blocks[i] -= p
            allocated = True
            break

    if not allocated:
        print("Process", p, "-> Not Allocated")