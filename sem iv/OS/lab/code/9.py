n = int(input("Enter number of processes: "))

bt = []
at = []

for i in range(n):
    at.append(int(input(f"Arrival time P{i+1}: ")))
    bt.append(int(input(f"Burst time P{i+1}: ")))

rt = bt[:]
complete = 0
t = 0
wt = [0] * n

while complete != n:
    shortest = -1
    min_bt = 9999

    for i in range(n):
        if at[i] <= t and rt[i] > 0 and rt[i] < min_bt:
            min_bt = rt[i]
            shortest = i

    if shortest == -1:
        t += 1
        continue

    rt[shortest] -= 1

    if rt[shortest] == 0:
        complete += 1
        finish = t + 1
        wt[shortest] = finish - bt[shortest] - at[shortest]

    t += 1

print("P\tWT")

for i in range(n):
    print(i+1, "\t", wt[i])