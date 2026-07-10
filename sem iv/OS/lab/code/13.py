from threading import Thread, Semaphore
import time

s = Semaphore(1)

def process(name):
    s.acquire()
    print(name, "entered critical section")
    time.sleep(2)
    print(name, "left critical section")
    s.release()

t1 = Thread(target=process, args=("P1",))
t2 = Thread(target=process, args=("P2",))

t1.start()
t2.start()

t1.join()
t2.join()