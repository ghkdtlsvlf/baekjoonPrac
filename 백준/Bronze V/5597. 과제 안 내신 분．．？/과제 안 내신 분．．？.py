
idNumber = [i+1 for i in range(30)]

for i in range(28):
    idNumber.remove(int(input()))

print(idNumber[0])
print(idNumber[1])