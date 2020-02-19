def isTriangle(d):
	i = 1;
	while(True):
		if i*(i+1) == d*2:
			return 1
		elif i*(i+1) > d*2:
			return 0
		i += 1

def triangle(w):
	s = 0
	for c in w[1:-1]:
		s += ord(c) - 64
	return s

f = open("res/p042_words.txt", "r")

data = f.read().split(",")

del data[-1]

data = [triangle(word) for word in data]

n = 0
for w in data:
	n += isTriangle(w)

print(n)
