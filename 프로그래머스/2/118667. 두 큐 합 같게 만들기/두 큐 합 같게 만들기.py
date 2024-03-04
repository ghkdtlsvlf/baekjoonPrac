from collections import deque


def solution(queue1, queue2):
    answer = 0
    queue1 = deque(queue1)
    queue2 = deque(queue2)
    total = (sum(queue1) + sum(queue2))
    queue1Sum = sum(queue1)
    queue2Sum = sum(queue2)
    maxMove = len(queue1) * 2 + 1
    if total % 2 != 0:
        answer = -1
        return answer

    achieve = total / 2

    for i in queue1:
        if i > achieve:
            answer = -1
            return answer

    for i in queue2:
        if i > achieve:
            answer = -1
            return answer

    while queue1Sum != queue2Sum:
        if answer> maxMove: return -1
        if queue1Sum < achieve:
            tmp = queue2[0]
            queue1.append(tmp)
            queue1Sum += tmp
            queue2.popleft()
            queue2Sum -= tmp
            answer += 1
        elif queue1Sum > achieve:
            tmp = queue1[0]
            queue2.append(tmp)
            queue2Sum += tmp
            queue1.popleft()
            queue1Sum -= tmp
            answer += 1


    return answer