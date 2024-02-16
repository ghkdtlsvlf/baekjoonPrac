case = int(input())


for i in range(case):
    change = int(input())
    q, d, n, p = 0, 0, 0, 0
    while change > 0:
        if change - 25 >= 0:
            q += 1
            change -= 25
        elif change - 10 >= 0:
            d += 1
            change -= 10
        elif change - 5 >= 0:
            n += 1
            change -= 5
        else:
            p += 1
            change -= 1
    print(q, d, n, p)

