import math

N = 1000000

def check(s):
    if len(s) != 9:
        return 0
    return ''.join(sorted(s)) == "123456789"

def pandigital(n):
    a = 1

    r = int(math.sqrt(n) + 0.5)
    while a <= r:
        if n % a == 0:
            b = n // a
            s = str(a) + str(b) + str(n)
            if check(s):
                return 1
        a += 1
    return 0


def main():
    i = 1
    s = 0
    lim = 1
    while i < N:
        if pandigital(i):
            s += i
        if i == lim:
            print(i)
            lim *= 10
        i += 1
    print(s)

main()
