inputCount = 9

arr = []
for i in range(inputCount):
    arr.append(int(input()))

print(max(arr))
print(arr.index(max(arr)) +1)