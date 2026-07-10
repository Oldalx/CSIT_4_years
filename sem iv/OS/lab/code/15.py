n = int(input("Enter number of processes: "))

max_need = []
alloc = []

for i in range(n):
    max_need.append(int(input(f"Max need of P{i}: ")))

for i in range(n):
    alloc.append(int(input(f"Allocated to P{i}: ")))

available = int(input("Available instances: "))

need = [max_need[i] - alloc[i] for i in range(n)]

finish = [False] * n
safe = []

while len(safe) < n:
    found = False

    for i in range(n):
        if not finish[i] and need[i] <= available:
            available += alloc[i]
            finish[i] = True
            safe.append(i)
            found = True

    if not found:
        break

if len(safe) == n:
    print("Safe Sequence:", end=" ")
    for p in safe:
        print("P" + str(p), end=" ")
else:
    print("Deadlock may occur")