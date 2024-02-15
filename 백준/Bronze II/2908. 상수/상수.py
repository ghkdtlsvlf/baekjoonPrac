num1, num2 = map(str,input().split())

re_num1= int(num1[::-1])
re_num2= int(num2[::-1])

if re_num1>re_num2:
    print(re_num1)
else:
    print(re_num2)