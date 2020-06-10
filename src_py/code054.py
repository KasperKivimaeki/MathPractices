def num(c):
    if c is 'T':
        return 10
    elif c is 'J':
        return 11
    elif c is 'Q':
        return 12
    elif c is 'K':
        return 13
    elif c is 'A':
        return 14
    else:
        return int(c)

def change(line):
    p1 = translate(line[0:14])
    p2 = translate(line[15:29])
    return [p1, p2]

def translate(s):
    color = sorted([s[1], s[4], s[7], s[10], s[13]])
    v = sorted([num(c) for c in [s[0], s[3], s[6], s[9], s[12]]])
    return [color, v]

def forceCheck(p1, p2):
    for i in range(5):
        if p1[1][4 - i] > p2[1][4 - i]:
            return 1
        elif p1[1][4 - i] < p2[1][4 - i]:
            return 2
    return 0

def comp(p1, p2):
    # 0 ace
    # 1 pair
    # 2 two pairs
    # 3 three of a kind
    # 4 straight
    # 5 flush
    # 6 full house
    # 7 four of a kind
    # 8 straight flush

    v = [0, 0]
    s = [0, 0]
    pls = [p1, p2]

    for i in range(2):
        p = pls[i]
        if len(set(p[0])) is 1:
            if (p[1][0] + 4) == p[1][4] or (p[1][3] + 9) == p[1][4]:
                v[i] = 8 # straight flush
            else:
                v[i] = 5  # flush
        else:
            if len(set(p[1])) == 2:
                if p[1][1] == p[1][3]:
                    v[i] == 7 # four of a kind
                else:
                    v[i] == 6 # full house
            elif len(set(p[1])) == 3:
                if p[1][0] == p[1][2] or p[1][1] == p[1][3] or p[1][2] == p[1][4]:
                    v[i] = 3 # three of a kind
                else:
                    v[i] = 2 # two pairs
            elif len(set(p[1])) == 4:
                v[i] = 1 # pair
                s[i] = [x for x in p[1] if p[1].count(x) >= 2][0]
            elif (p[1][0] + 4) == p[1][4] or (p[1][3] + 9) == p[1][4]:
                v[i] = 4 # straight

    if v[0] > v[1]:
        return 1
    elif v[1] > v[0]:
        return 2
    else:
        print(v[0], p1[1], p2[1])
        if v[0] == 2:
            if p1[1][3] > p2[1][3]:
                return 1
            elif p1[1][3] < p2[1][3]:
                return 2
            elif p1[1][1] > p2[1][1]:
                return 1
            elif p1[1][1] < p2[1][1]:
                return 2
        elif v[0] == 10 or v[0] == 9 or v[0] == 8 or v[0] == 4 or v[0] == 3:
            if p1[1][2] > p2[1][2]:
                return 1
            elif p1[1][2] < p2[1][2]:
                return 2
        elif v[0] == 1:
            if s[0] > s[1]:
                return 1
            elif s[0] < s[1]:
                return 2
    return forceCheck(p1, p2)

def read():
    f = open("res/p054_poker.txt", "r")
    data = f.read().split("\n")
    del data[-1]
    return [change(word) for word in data]

def main():
    d = read()

    y = 0

    for c in d:
        v = comp(c[0], c[1])
        print("v: ", v)
        if v == 1:
            y = y + 1

    print("y: ", y)
        

main()
