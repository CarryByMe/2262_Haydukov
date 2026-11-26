n = int(input())
a = list(map(int, input().split()))

b = set()
r = n

for i in range(n):
    b.add(a[i])

    if len(b) == 3:
        r = i 
        break
print(r+1)