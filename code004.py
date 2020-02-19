def is_palindrome(n):
	s = str(n)
	l = len(s)
	i = 0
	while i < int(l/2):
		if s[i] != s[l - i - 1]:
			return False
		i = i + 1
	return True


m = 1

a = 100
b = 100

while a <= 999:
	while b <= 999:
		n = a*b
		if n > m:
			if is_palindrome(n):
				m = n
		b = b + 1
	b = 100
	a = a + 1
		
print(m)
