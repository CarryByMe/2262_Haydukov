k = input()
n = int(input())

dostoinstva = ["6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"]
otvety = []

for i in range(n):
    a = input().split()
    b = input().split()
    a_rank = a[0]
    a_suit = a[1]
    b_rank = b[0]
    b_suit = b[1]

    a_p = dostoinstva.index(a_rank)
    b_p = dostoinstva.index(b_rank)

    b_bet = False

    if a_suit == b_suit:
        if b_p > a_p:
            b_bet = True
    else:
        if b_suit == k:
            if a_suit != k:
                b_bet = True

    if b_bet == True:
        otvety.append("1")
    else:
        otvety.append("0")

s = ""
for x in otvety:
    s = s + x + " "
print(s)