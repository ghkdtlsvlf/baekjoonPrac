word = input()

alphabetList=[-1]*26

for idx, char in enumerate(word):
    alphabet_index = ord(char) - ord('a')
    if alphabetList[alphabet_index] == -1:
        alphabetList[alphabet_index] = idx
# 결과 출력
for pos in alphabetList:
    print(pos, end=" ")