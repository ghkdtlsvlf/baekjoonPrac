import sys

case = int(input())
sumList =[]

for i in range(case):
    sumList.append(sum(map(int, sys.stdin.readline().rstrip().split())))

for i in sumList:
    print(i)