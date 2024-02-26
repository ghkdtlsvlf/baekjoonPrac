while True:

    a = int(input())
    if a== -1: break

    store = []

    for i in range(1, a + 1):
        if a % i == 0:
            store.append(i)

    sumDivors = sum(store) - a

    if a == sumDivors:
        print(store[len(store)-1], ' = ',end='',sep='')
        for i in range(len(store)-1):
            if i == len(store) - 2:
                print(store[i])
            else:
                print(store[i], ' + ', end='',sep='')
    else:
        print(store[-1], 'is NOT perfect.')
