from threading import Thread, Semaphore
import time

forks = [Semaphore(1) for i in range(5)]

def philosopher(i):
    left = forks[i]
    right = forks[(i + 1) % 5]

    left.acquire()
    right.acquire()

    print("Philosopher", i, "eating")
    time.sleep(1)

    right.release()
    left.release()

threads = []

for i in range(5):
    t = Thread(target=philosopher, args=(i,))
    threads.append(t)
    t.start()

for t in threads:
    t.join()