n = 100

s = 0
i = 1

low = n*(n+1)/2
low = int(low)
low = low*low

while i <= n:
	s = s + i*i
	i = i + 1

print (low - s)
