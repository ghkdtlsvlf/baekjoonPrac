a = int(input())

intputNumbersSum = []

for i in range(a):
    num = sum(map(int, input().split()))
    intputNumbersSum.append(num)

for i in intputNumbersSum:
    print(i)