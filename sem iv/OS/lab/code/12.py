n = int(input("Enter number of processes: "))

bt = []
at = []

for i in range(n):
    at.append(int(input(f"Arrival time P{i+1}: ")))
    bt.append(int(input(f"Burst time P{i+1}: ")))

completed = [False] * n
time = 0
done = 0

print("Order:")

while done < n:
    hrr = -1
    idx = -1

    for i in range(n):
        if at[i] <= time and not completed[i]:
            rr = (time - at[i] + bt[i]) / bt[i]

            if rr > hrr:
                hrr = rr
                idx = i

    time += bt[idx]
    completed[idx] = True
    done += 1

    print("P" + str(idx + 1))