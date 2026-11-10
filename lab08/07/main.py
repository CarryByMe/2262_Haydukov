s = []
n = int(input())

for _ in range(n):
    si = int(input())
    s.append(si)

for i in s:
    if i < 0:
        print(i)
        break
else:
    print("Не найдено")