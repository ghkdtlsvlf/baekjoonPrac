row, col = map(int, input().split())

arr = [['' for _ in range(col)] for _ in range(row)]


for i in range(row * 2):
    colValue = input().split()
    if i < row:
        for j in range(col):
            arr[i][j] = int(colValue[j])
    else:
        for j in range(col):
            arr[i-row][j] += int(colValue[j])


for i in arr:
    print(*i)