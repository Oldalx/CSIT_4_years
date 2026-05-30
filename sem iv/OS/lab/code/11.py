n = int(input("Enter number of processes: "))

process = []

for i in range(n):
    bt = int(input(f"Burst time P{i+1}: "))
    pr = int(input(f"Priority P{i+1}: "))
    process.append((i + 1, bt, pr))

process.sort(key=lambda x: x[2])

wt = 0

print("P\tBT\tPR\tWT\tTAT")

for p, bt, pr in process:
    tat = wt + bt
    print(p, "\t", bt, "\t", pr, "\t", wt, "\t", tat)
    wt = tat