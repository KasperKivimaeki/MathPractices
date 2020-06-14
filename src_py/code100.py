    

def solve(n):
    b = 1
    m = (n*n - n) // 2

    while b*b - b < m:
        b += 1

    return b*b - b == m 

def fits(n):
    c = 1 + 2*(n*n - n)
    while c % 2 == 0:
        if c % 4 == 0: c //= 4
        else: return 0
    while c % 3 == 0:
        if c % 9 == 0: c //= 9
        else: return 0
    while c % 5 == 0:
        if c % 25 == 0: c //= 25
        else: return 0
    while c % 7 == 0:
        if c % 49 == 0: c //= 49
        else: return 0
    while c % 11 == 0:
        if c % 121 == 0: c //= 121
        else: return 0
    i = 1
    while i*i < c: i += 2
    return i*i == c

def main():
    i = 10**12
    while not fits(i):
        i += 1
    print(i)


print(solve(21))
print(solve(120))

main()
