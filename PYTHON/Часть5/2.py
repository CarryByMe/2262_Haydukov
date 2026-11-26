n = int(input())
a = list(map(int, input().split()))
a.sort(key=lambda x: abs(x) * 2 + (1 if x > 0 else 0))
print(*a)
