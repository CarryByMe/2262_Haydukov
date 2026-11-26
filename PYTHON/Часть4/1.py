n = int(input())

count = 0
x = 2

while True:
    is_prime = True
    d = 2

    while d * d <= x:
        if x % d == 0:
            is_prime = False
            break
        d += 1

    if is_prime:
        count += 1
        if count == n:
            print(x)
            break

    x += 1