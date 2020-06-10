import math

def isPrime(p):
    s = p / 2
    i = 2

    while i < s:
        if p % i == 0:
            return False
        i = i + 1
    return True

def same(a, b):
    return sorted(str(a)) == sorted(str(b))

def main():
    a = 1000
    while a <= 9997:
        while isPrime(a) == False:
            a = a + 1

        b = a + 1
        while b < a + (10000 - a)/2:
            while isPrime(b) == False and b < 10000:
                b = b + 1

            if same(a, b) and b < 10000:
                c = b + (b - a)
                if isPrime(c) and same(a, c):
                    print(a, b, c)

            b = b + 1

        a = a + 1

main()
