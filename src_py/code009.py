




c = 334

while c <= 500:
	b = c - 1
	a = 1000 - b - c
	while b > a:
		if a*a + b*b == c*c:
			print(a, b, c)
			print(a*b*c)
		b = b - 1
		a = a + 1
	c = c + 1
