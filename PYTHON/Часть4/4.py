n = int(input())

for i in range(n):
    password = input().strip()

    ok1 = False
    for ch in password:
        if ch in "1234567890":
            ok1 = True
            break

    ok2 = False
    for ch in password:
        if ch in "qwertyuiop":
            ok2 = True
            break

    ok3 = False
    for ch in password:
        if ch in "asdfghjkl":
            ok3 = True
            break


    ok4 = False
    for ch in password:
        if ch in "zxcvbnm":
            ok4 = True
            break

    if ok1 and ok2 and ok3 and ok4:
        print("strong")
    else:
        print("weak")