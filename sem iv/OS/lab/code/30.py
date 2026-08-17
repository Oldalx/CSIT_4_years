requests = [98, 183, 37, 122, 14, 124, 65, 67]
head = 53

right = sorted([x for x in requests if x >= head])
left = sorted([x for x in requests if x < head], reverse=True)

order = right + left

total = 0
sequence = [head]

for r in order:
    total += abs(head - r)
    head = r
    sequence.append(r)

print("Initial Head:", sequence[0])
print("Request Queue:", *requests)
print("Seek Sequence:", *sequence)
print("Total Head Movement:", total)