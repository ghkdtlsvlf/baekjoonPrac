croatiaAlphabet = (
    'c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z='
)

stringToCount = input()
for i in croatiaAlphabet:
    if i in stringToCount:
        count = stringToCount.count(i)
        stringToCount = stringToCount.replace(i," ",count)

print(len(stringToCount))

