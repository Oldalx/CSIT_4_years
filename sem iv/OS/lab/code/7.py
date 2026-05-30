n = int(input("Enter number of processes: "))

bt = []
wt = [0] * n
tat = [0] * n

for i in range(n):
    bt.append(int(input(f"Burst time P{i+1}: ")))

for i in range(1, n):
    wt[i] = wt[i-1] + bt[i-1]

for i in range(n):
    tat[i] = wt[i] + bt[i]

print("P\tBT\tWT\tTAT")

for i in range(n):
    print(i+1, "\t", bt[i], "\t", wt[i], "\t", tat[i])