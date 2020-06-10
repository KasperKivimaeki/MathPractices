f = open("p067_triangle.txt", "r")

data = f.read().split("\n")

del data[-1]


data = [line.split(" ") for line in data]
data = [[int(e) for e in line] for line in data]

for i in range(1, 100):
	row = 99 - i
	for e in range(0, row + 1):
		l = data[row + 1][e]
		r = data[row + 1][e + 1]
		if l > r:
			data[row][e] += l
		else:
			data[row][e] += r
		
		


print(list(data)[2])

print(data[0][0])
