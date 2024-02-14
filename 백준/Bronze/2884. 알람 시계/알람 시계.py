H, M = map(int,input().split())

if M>=45:
    M-=45
    print(H, M)
else:
    M+=15
    H-=1
    if H<0:
        H = 23
    print(H, M)