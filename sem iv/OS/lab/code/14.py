n = int(input("Enter number of processes: "))
m = int(input("Enter number of resource types: "))

alloc = []
maxm = []

print("Enter Allocation Matrix")
for i in range(n):
    alloc.append(list(map(int, input().split())))

print("Enter Max Matrix")
for i in range(n):
    maxm.append(list(map(int, input().split())))

avail = list(map(int, input("Enter Available Resources: ").split()))

need = [[0] * m for _ in range(n)]

for i in range(n):
    for j in range(m):
        need[i][j] = maxm[i][j] - alloc[i][j]

finish = [False] * n
safe = []
work = avail[:]

while len(safe) < n:
    found = False

    for i in range(n):
        if not finish[i]:
            ok = True

            for j in range(m):
                if need[i][j] > work[j]:
                    ok = False
                    break

            if ok:
                for j in range(m):
                    work[j] += alloc[i][j]

                safe.append(i)
                finish[i] = True
                found = True

    if not found:
        break

if len(safe) == n:
    print("Safe Sequence:", end=" ")
    for p in safe:
        print("P" + str(p), end=" ")
else:
    print("System is not in safe state")