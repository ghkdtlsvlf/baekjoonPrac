h, m = map(int, input().split())
t= int(input())
timePlus = m + t

h += timePlus//60
m = timePlus - (timePlus//60)*60
if h>=24:
    h-=24

print(h, m)