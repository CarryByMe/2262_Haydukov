from string import ascii_lowercase

s = input().strip()

max = -1
theOne = ''

for a in ascii_lowercase:
    cnt = s.count(a)
    if cnt > max:
        max = cnt
        theOne = a

for i in range(len(s)):
    if s[i] != theOne:
        print(s[i], end="")