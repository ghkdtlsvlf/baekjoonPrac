count = int(input())

for i in range(count):
    print(" "*(count-i-1), "*"*(2*i+1),sep="")
for i in range(count-2,-1,-1):
    print(" "*(count-i-1), "*"*(2*i+1),sep="")
