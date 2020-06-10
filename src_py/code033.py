def low(u, d):
    r = 2
    while r < u:
        while (u % r == 0) and (d % r == 0):
            u //= r
            d //= r
        r += 1
    print(u, d)

def main():

    u = 1
    d = 1

    a = 10
    while a < 100:
        b = a + 1 
        while b < 100:
            ar = int(str(a)[0])
            al = int(str(a)[1])
            br = int(str(b)[0])
            bl = int(str(b)[1])
            if (ar * b == bl * a) and (br == al):
                print(a, b)
                u *= a
                d *= b
            b += 1
        a += 1

    print(u, d)
    low(u, d)

main()
