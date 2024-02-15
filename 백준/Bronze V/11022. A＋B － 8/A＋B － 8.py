import sys

case = int(input())

for i in range(case):
    a, b = (map(int, sys.stdin.readline().rstrip().split()))
    print("Case #", i + 1, ": ",a,' + ',b,' = ', a + b, sep='')
