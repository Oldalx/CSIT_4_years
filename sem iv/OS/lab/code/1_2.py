from threading import Thread
import time

def worker():
    print("Thread started")
    time.sleep(2)
    print("Thread terminated")

print("Main program started")

t = Thread(target=worker)   # Create thread
t.start()                   # Start thread

t.join()                    # Wait for thread to finish

print("Main program terminated")