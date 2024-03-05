def solution(board, skill):
    answer = 0
    row_length = len(board)
    col_length = len(board[0])

    # 누적합 리스트 생성
    cumulative_board = [[0] * col_length for _ in range(row_length)]

    for type, i, j, d1, d2, dmg in skill:
        if type == 1:
            # 영역의 왼쪽 위와 오른쪽 아래에 각각 데미지 적용
            cumulative_board[i][j] -= dmg
            if d1 + 1 < row_length:
                cumulative_board[d1 + 1][j] += dmg
            if d2 + 1 < col_length:
                cumulative_board[i][d2 + 1] += dmg
            if d1 + 1 < row_length and d2 + 1 < col_length:
                cumulative_board[d1 + 1][d2 + 1] -= dmg
        else:
            # 영역의 왼쪽 위와 오른쪽 아래에 각각 데미지 적용
            cumulative_board[i][j] += dmg
            if d1 + 1 < row_length:
                cumulative_board[d1 + 1][j] -= dmg
            if d2 + 1 < col_length:
                cumulative_board[i][d2 + 1] -= dmg
            if d1 + 1 < row_length and d2 + 1 < col_length:
                cumulative_board[d1 + 1][d2 + 1] += dmg

    # 누적합을 이용하여 최종 board 계산
    for i in range(row_length):
        for j in range(col_length):
            if i > 0:
                cumulative_board[i][j] += cumulative_board[i - 1][j]
            if j > 0:
                cumulative_board[i][j] += cumulative_board[i][j - 1]
            if i > 0 and j > 0:
                cumulative_board[i][j] -= cumulative_board[i - 1][j - 1]

    # 생명력이 양수인 칸의 개수 세기
    for i in range(row_length):
        for j in range(col_length):
            if board[i][j] + cumulative_board[i][j] > 0:
                answer += 1

    return answer
