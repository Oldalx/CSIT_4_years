import random

RoomA ="Dirty"
RoomB ="Dirty"

current_room =random.choice(["A","B"])


for step in range(5):
    print("current room",current_room)
    print("RoomA status:",RoomA, "RoomB status:",RoomB)


    if current_room == "A":
        if RoomA =="Dirty":
            RoomA ="Clean"
            print("RoomA is cleaned")
        else:
            print("RoomA is already cleaned")
            current_room ="B"

    else:
        if RoomB =="Dirty":
            RoomB = "Clean"
            print("RoomB is cleaned")
        else:
            print("RoomB is already cleaned")
            current_room ="A"




