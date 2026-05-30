from threading import Thread, Semaphore
import time

s = Semaphore(1)

def task(name):
    s.acquire()
    print(name, "entered")
    time.sleep(1)
    print(name, "leaving")
    s.release()

t1 = Thread(target=task, args=("P1",))
t2 = Thread(target=task, args=("P2",))

t1.start()
t2.start()

t1.join()
t2.join()