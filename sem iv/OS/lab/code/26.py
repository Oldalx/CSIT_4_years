requests = [98, 183, 37, 122, 14, 124, 65, 67]
head = 53
total = 0
sequence = [head]

for r in requests:
    total += abs(head - r)
    head = r
    sequence.append(r)

print("Initial Head:", sequence[0])
print("Request Queue:", *requests)
print("Seek Sequence:", *sequence)
print("Total Head Movement:", total)