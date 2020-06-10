N = 1000000

def palindromic(s):
    for i in range(len(s)):
        if s[i] != s[len(s) - 1 - i]:
            return 0
    return 1

def bin(n):
    s = ""
    while n > 0:
        a = n % 2
        n = (n - a) // 2
        s = s + str(a)
    return s

def main(): 
    i = 1
    f = 0
    while i < N:
        if palindromic(str(i)) and palindromic(bin(i)):
            print(str(i), bin(i))
            f += i
        i += 1
    print(f)

main()
