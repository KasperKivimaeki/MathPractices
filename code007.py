import math

def is_prime(p):
	r = int(math.sqrt(i))
	t = 2
	while t <= r:
		if p % t == 0:
			return False
		t = t + 1
	return True



p = 6

i = 13

while p < 10001:
	i = i + 2
	if i > 150000:
		print("hups")
		exit()
	if is_prime(i):
		p = p + 1
	


print(i)
