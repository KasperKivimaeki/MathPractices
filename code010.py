import math

def is_prime(p):
	r = int(math.sqrt(i))
	t = 2
	while t <= r:
		if p % t == 0:
			return False
		t = t + 1
	return True



s = 2+3+5+7+11+13

i = 13

while i < 2000000:
	i = i + 2
	if is_prime(i):
		s = s + i
	


print(i)
print(s)
