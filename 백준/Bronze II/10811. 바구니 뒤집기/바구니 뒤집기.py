arrayCount, change = map(int, input().split())

bucketList = [i+1 for i in range(arrayCount)]

for i in range(change):
    start, end = map(int, input().split())
    bucketList[start-1:end] = reversed(bucketList[start-1:end])

for i in bucketList:
    print(i,end=" ")