def solution(topping):
    answer = 0
    chul_set = set()
    bro_dic = {}
    for i in topping:
        bro_dic[str(i)] = bro_dic.get(str(i),0)
        bro_dic[str(i)] +=1
    for i in topping:
        chul_set.add(i)
        bro_dic[str(i)]-=1
        if bro_dic[str(i)] ==0:
            del bro_dic[str(i)]
        
        if len(chul_set) == len(bro_dic):
            answer +=1
        
    return answer