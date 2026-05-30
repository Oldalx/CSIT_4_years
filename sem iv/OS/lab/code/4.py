from threading import Thread, Semaphore
import time

buffer = []
empty = Semaphore(5)
full = Semaphore(0)
mutex = Semaphore(1)

def producer():
    for i in range(5):
        empty.acquire()
        mutex.acquire()
        buffer.append(i)
        print("Produced", i)
        mutex.release()
        full.release()
        time.sleep(1)

def consumer():
    for i in range(5):
        full.acquire()
        mutex.acquire()
        item = buffer.pop(0)
        print("Consumed", item)
        mutex.release()
        empty.release()
        time.sleep(1)

t1 = Thread(target=producer)
t2 = Thread(target=consumer)

t1.start()
t2.start()

t1.join()
t2.join()