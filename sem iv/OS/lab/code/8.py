n = int(input("Enter number of processes: "))

process = []

for i in range(n):
    bt = int(input(f"Burst time P{i+1}: "))
    process.append((i + 1, bt))

process.sort(key=lambda x: x[1])

wt = 0
total = 0

print("P\tBT\tWT\tTAT")

for p, bt in process:
    tat = wt + bt
    print(p, "\t", bt, "\t", wt, "\t", tat)
    total += wt
    wt = tat