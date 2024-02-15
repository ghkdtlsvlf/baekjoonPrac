chessPieceNumber = list(map(int, input().split()))


originNumber = (1, 1, 2, 2, 2, 8)

for i in range(len(chessPieceNumber)):
    if chessPieceNumber[i] == originNumber[i]:
        print('0',end=" ")
      
    else:
        print(originNumber[i] - chessPieceNumber[i],end=" ")
   

