case = int(input())

point_num = 2
for i in range(case):
    point_num += 2**i

print(point_num*point_num)