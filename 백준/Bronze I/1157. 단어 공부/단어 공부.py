
alphabet_string = input().lower()

alphabetDic= {}

for i in alphabet_string:
    if i in alphabetDic:
        alphabetDic[i] += 1
    else:
        alphabetDic[i] = 1


max_count= max(alphabetDic.values())
maxList=[]

for key,val in alphabetDic.items():
    if  val == max_count:
        maxList.append(key)

if len(maxList)==1:
    print(maxList[0].upper())
else:
    print("?")
