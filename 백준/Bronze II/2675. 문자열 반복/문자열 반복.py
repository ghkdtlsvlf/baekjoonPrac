testcase = int(input())

for i in range(testcase):
    repeat, word = map(str, input().split())
    repeat = int(repeat)
    for i in word:
        print(i * repeat,end="")
    print('\n',end="")