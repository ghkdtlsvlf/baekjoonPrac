amount = int(input())
specice = int(input())
checkSum = 0

for i in range(specice):
    a,b = map(int, input().split())
    checkSum += a*b


if checkSum ==amount:
    print('Yes')
else:
    print('No')