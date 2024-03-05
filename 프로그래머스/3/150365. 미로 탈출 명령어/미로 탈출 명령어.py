from collections import deque
def solution(n, m, x, y, r, c, k):
    answer = ''
    q = deque([(x, y, "", 0)])
    dt = [(1, 0, "d"), (0, -1, "l"), (0, 1, "r"), (-1, 0, "u")]  # 사전순
    if ((abs(x - r) + abs(y - c)) % 2 == 0 and k % 2 != 0) or ((abs(x - r) + abs(y - c)) % 2 != 0 and k % 2 == 0):
        return 'impossible'

    while q:
        x, y, path, cnt = q.popleft()

        if cnt == k and (x, y) == (r, c):
            return path

        for i in range(4):
            dx, dy, direction = dt[i]
            nx = x + dx
            ny = y + dy

            if nx > n or nx <= 0 or ny > m or ny <= 0: continue
            if abs(nx - r) + abs(ny - c) + cnt + 1 > k: continue  # 최단거리
            q.append((nx, ny, path + direction, cnt + 1))
            break;

    return 'impossible'