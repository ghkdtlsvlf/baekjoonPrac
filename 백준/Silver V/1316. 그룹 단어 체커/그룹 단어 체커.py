wordCount = int(input())

wordList = []
for i in range(wordCount):
    wordList.append(input())


def is_word_group(word):
    for i in range(len(word) - 1):
        if word[i] != word[i + 1]:
            if word[i] in word[i + 1:]:
                return False
    return True


def count_word_group(wordGroup):
    count = 0
    for i in wordGroup:
        if is_word_group(i) == True:
            count += 1

    return count


groupWordCount = count_word_group(wordList)
print(groupWordCount)
