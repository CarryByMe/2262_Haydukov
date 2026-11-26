w, h, s = map(int, input().split())
n = int(input())

a = []
for i in range(n):
    x, y = map(int, input().split())
    a.append((x, y))
def f(p):
    x, y = p
    k = x // s
    if k % 2 == 0:
        return (k, y, x)
    else:
        return (k, -y, x)

b = sorted(a, key=f)

ans = 0
for i in range(n - 1):
    x1, y1 = b[i]
    x2, y2 = b[i + 1]
    d = ((x2 - x1) ** 2 + (y2 - y1) ** 2) ** 0.5
    ans += d

print(ans)
