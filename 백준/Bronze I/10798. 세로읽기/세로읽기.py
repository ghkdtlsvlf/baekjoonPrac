
wordList =[input() for i in range(5)]

max_length = max(len(word) for word in wordList)

for i in range(5):
    wordList[i] = wordList[i].ljust(max_length)

result =''

for j in range(max_length):
    for i in range(5):
            if wordList[i][j] != ' ':
                result += wordList[i][j]

print(result)