import math

N = 987654322

def pandigital(s):
    if len(s) != 9:
        return 0
    return ''.join(sorted(s)) == "123456789"

def main():
    n = 2
    m = 0
    while n <= 9:
        i = 1
        while True:
            s = ""
            for c in range(n):
                s += str(i * (c + 1))
            if len(s) > 9: break
            if len(s) == 9:
                if int(s) > m:
                    if pandigital(s):
                        m = int(s)
            i += 1
        n += 1

    print(m)

main()
