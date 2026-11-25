s = input().strip()
n = int(input())
d = {}
for i in range(n):
    w1 = input().strip()
    w2 = input().strip()
    d[w1] = w2

for i in range(1, len(s)):
    a = s[:i]
    b = s[i:]
    if a in d and b in d:
        print(d[a]+d[b])
        break
