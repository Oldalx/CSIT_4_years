import random

RoomA = "Dirty"
RoomB = "Dirty"

memory = {
    "A": False,  
    "B": False
}

current_room = random.choice(["A", "B"])

while True:

    print("\nCurrent room:", current_room)
    print("RoomA:", RoomA, "| RoomB:", RoomB)
    print("Memory:", memory)

    if current_room == "A":
        if RoomA == "Dirty":
            RoomA = "Clean"
            memory["A"] = True
            print("Cleaned Room A")
        else:
            memory["A"] = True
            print("Room A already clean")

    else:  
        if RoomB == "Dirty":
            RoomB = "Clean"
            memory["B"] = True
            print("Cleaned Room B")
        else:
            memory["B"] = True
            print("Room B already clean")

    if memory["A"] and memory["B"]:
        print("\nAll rooms are clean. Stopping agent.")
        break

    if current_room == "A":
        current_room = "B"
    else:
        current_room = "A"