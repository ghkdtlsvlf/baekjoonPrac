n_number, n = input().split()

dic = {chr(ord('A') + i): i + 10 for i in range(26)}
tenDigit = 0
for i in range(len(n_number) - 1, -1, -1):
    if n_number[i] in dic.keys():
        tenDigit += int(dic.get(n_number[i])) * (int(n)**(len(n_number)-i-1))
    else:
        tenDigit += int(n_number[i]) * (int(n)**(len(n_number)-i-1))

print(tenDigit)