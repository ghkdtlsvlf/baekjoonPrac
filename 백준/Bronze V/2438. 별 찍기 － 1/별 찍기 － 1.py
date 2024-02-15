import sys

case = int(input())

for i in range(case):
    for j in range(i+1):
        print('*', end="")
    print('\n', end="")