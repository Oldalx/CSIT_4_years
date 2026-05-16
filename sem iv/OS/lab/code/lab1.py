from multiprocessing import Process
import time

def worker():
    print("Child process started")
    time.sleep(2)
    print("Child process terminated")

if __name__ == "__main__":
    print("Main process started")

    p = Process(target=worker)   
    p.start()                   
    p.join()                     

    print("Main process terminated")