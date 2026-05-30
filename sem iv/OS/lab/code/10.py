n = int(input("Enter number of processes: "))

bt = []
rt = []

for i in range(n):
    x = int(input(f"Burst time P{i+1}: "))
    bt.append(x)
    rt.append(x)

q = int(input("Enter quantum: "))

t = 0
wt = [0] * n

while True:
    done = True

    for i in range(n):
        if rt[i] > 0:
            done = False

            if rt[i] > q:
                t += q
                rt[i] -= q
            else:
                t += rt[i]
                wt[i] = t - bt[i]
                rt[i] = 0

    if done:
        break

print("P\tWT")

for i in range(n):
    print(i+1, "\t", wt[i])