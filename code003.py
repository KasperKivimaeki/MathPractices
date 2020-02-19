n = 600851475143 

i = 2

l = 1


while i <= n:
	if n % i == 0:
		print(i)
		if i > l:
			l = i
		n = n / i
		i = 2
	else:
		i = i + 1
	 

print(l)
