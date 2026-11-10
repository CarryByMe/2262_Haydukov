x = [int(t) for t in input().split()]
i = 0
while i < len(x) - 1 and (x[i] < i or x[i] >= 2*i) and (x[i] < 3*i or 4*i <= x[i]):
   i += 1
print(i)