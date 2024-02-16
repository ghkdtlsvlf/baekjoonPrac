case = int(input())

n = 0
while True:

    if 1 + 6 * (n * (n - 3) / 2) < case <= 1 + 6 * (n * (n - 1) / 2):
        print(n)
        break
    else:
        n += 1
