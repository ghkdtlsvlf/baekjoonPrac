bucket, change = map(int, input().split())

balls = []

for i in range(bucket):
    balls.append(i+1)

for i in range(change):
    a, b = map(int, input().split())
    temp = balls[b-1]
    balls[b-1] = balls[a-1]
    balls[a-1] = temp

for i in balls:
    print(i)