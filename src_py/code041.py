from itertools import permutations as permutate
from math import sqrt

def isPrime(p):
    r = int(sqrt(p))
    i = 2
    while i <= r:
        if p % i == 0:
            return False
        i = i + 1
    return True

def main():
    n = "1234567"
    f = permutate(n)
    f = [int("".join(x)) for x in f]
    f.sort(reverse=True)

    for a in f:
        if isPrime(a):
            print(a)
            return

main()
