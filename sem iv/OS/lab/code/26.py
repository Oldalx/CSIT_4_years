bitmap = [1, 0, 1, 1, 0, 0, 1, 0]

print("Initial Bitmap:", bitmap)

for i in range(len(bitmap)):
    if bitmap[i] == 0:
        bitmap[i] = 1
        print("Allocated Block:", i)
        break

print("Updated Bitmap:", bitmap)