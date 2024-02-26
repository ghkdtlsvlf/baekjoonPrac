a = int(input())
b = int(input())
arrayList = []

for i in range(a,b+1):
    for j in range(2, i+1):
        if i == j:
            arrayList.append(i)
        elif i % j == 0:
            break

if len(arrayList) !=0:
    print(sum(arrayList))
    print(arrayList[0])
else:
    print('-1')