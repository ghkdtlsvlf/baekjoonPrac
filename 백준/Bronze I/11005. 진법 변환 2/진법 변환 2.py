def convert_base(decimal_number, base):
    result = ''
    while decimal_number > 0:
        remainder = decimal_number % base
        if remainder < 10:
            result = str(remainder) + result
        else:
            result = chr(ord('A') + remainder - 10) + result
        decimal_number //= base
    return result if result else '0'

# 입력 받기
N, B = map(int, input().split())

# 변환 결과 출력
print(convert_base(N, B))