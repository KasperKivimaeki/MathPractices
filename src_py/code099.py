










f = open("../res/p099_base_exp.txt", "r")

m = 0
d = f.read().split("\n")[0:-1]
f.close()

for e in d:
    v = e.split(",")
    b = int(v[0])
    n = int(v[1])
    #print(str(b) + "^" + str(n))
    x = len(str(b)) * len(str(n))
    if x > m: m = x
print(m)

#def fil(e):
#    v = e.split(",")
#    b = int(v[0])
#    n = int(v[1])
#    #print(str(b) + "^" + str(n))
#    x = len(str(b)) * len(str(n))
#
#    return x == m
#
#d = filter(fil, d)


m = 0
j = 0

print("what")
print(len(d))

i = 0
for e in d:
    i += 1
    print(i)
    v = e.split(",")
    print(e)
    b = int(v[0])
    n = int(v[1])
    print(str(b) + "^" + str(n))
    x = b**n
    if x > m: 
        m = x
        j = i

print(m)
print(j)
