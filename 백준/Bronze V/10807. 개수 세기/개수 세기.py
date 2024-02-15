num = int(input())

numbers= list( map(int, input().split()))

v = int(input())

count = 0
for i in numbers:
    if v == i:
        count+=1

print(count)