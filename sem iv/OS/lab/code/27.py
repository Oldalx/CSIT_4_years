requests = [98, 183, 37, 122, 14, 124, 65, 67]
head = 53
total = 0
sequence = [head]

while requests:
    r = min(requests, key=lambda x: abs(x - head))
    total += abs(head - r)
    head = r
    sequence.append(r)
    requests.remove(r)

print("Initial Head:", sequence[0])
print("Seek Sequence:", *sequence)
print("Total Head Movement:", total)