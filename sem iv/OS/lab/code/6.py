from threading import Thread, Semaphore
import time
import random

customers = Semaphore(0)
barber = Semaphore(0)
mutex = Semaphore(1)

waiting = 0
chairs = 3

def barber_shop():
    global waiting

    for i in range(5):
        customers.acquire()

        mutex.acquire()
        waiting -= 1
        barber.release()
        mutex.release()

        print("Barber cutting hair")
        time.sleep(2)

def customer(i):
    global waiting

    mutex.acquire()

    if waiting < chairs:
        waiting += 1
        print("Customer", i, "waiting")
        customers.release()
        mutex.release()

        barber.acquire()
        print("Customer", i, "getting haircut")
    else:
        mutex.release()
        print("Customer", i, "left")

threads = []

b = Thread(target=barber_shop)
b.start()

for i in range(5):
    t = Thread(target=customer, args=(i,))
    threads.append(t)
    t.start()
    time.sleep(random.random())

for t in threads:
    t.join()

b.join()