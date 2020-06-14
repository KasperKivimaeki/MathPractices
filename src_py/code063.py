















def main():
    i = 1
    f = 0

    while i < 10:
        n = 1
        while n < 100:
            d = i ** n
            if len(str(d)) == n:
                f += 1
            n += 1
        i += 1
    print(f)

main()
