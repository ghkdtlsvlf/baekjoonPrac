a, b = map(int, input().split())

store = []

for i in range(1, a+1):
    if a % i == 0:
        store.append(i)

if len(store) > b-1:
    print(store[b-1])
else:
    print('0')