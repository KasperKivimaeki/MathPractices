f = 0
ti = 1
pi = 1
hi = 1
t = 1
p = 1 
h = 1

while f < 5:
    while h != p:
        while h > p:
            pi += 1
            p = int(pi*(3*pi-1)/2)
        while p > h:
            hi += 1
            h = int(hi*(2*hi-1))
    print("h: " + str(h))
    while t < p:
        ti += 1
        t = int(ti*(ti+1)/2)
    if t == p:
        print("t: " + str(t))
        f += 1
        hi += 1
        h = int(hi*(2*hi-1))
