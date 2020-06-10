from itertools import permutations as permutate

primes = [2, 3, 5, 7, 11, 13, 17]

def test(n):
    for i, p in zip(range(0, 7), primes):
        if int("".join(n[i + 1: i + 4])) % p > 0:
            return False
    return True

def main():
    n = "1234567890"
    f = permutate(n)
    
    s = 0
    for a in f:
        if test(a):
            s = s + int("".join(a))
    
    print(s)

main()
#print(test("1406357289"))
