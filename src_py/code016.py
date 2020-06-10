size = 10
n = [0] * size
n[0] = 1;

i = 0

while i < 1000000:
	d = size - 2

	while d >= 0:
		n[d] *= 2
		n[d + 1] += n[d] // 10
		n[d] %= 10
		d = d - 1

	i += 1

	if n[size - 1] != 0:
		size += 1
		n.append(0)

print(sum(n))
