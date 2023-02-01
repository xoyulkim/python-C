# ch15ex5.py
# 2023.1.31 김도연
# 문자열에서 각 문자들의 등장 횟수 카운팅하기

string = 'hello'
counting = {}   # 빈 사전 생성

for ch in string:
    if ch in counting:
        counting[ch] += 1
    else:
        counting[ch] = 1

print(counting)

# numbers 리스트에서 각 숫자의 등장횟수를 카운팅하여 num_dict 사전에 저장하여 출력
numbers = [1, 3, 5, 2, 3, 6, 7, 7, 9, 1, 6, 7, 7]
num_dict = {}
counting = {}
for ch in numbers:
    if ch in num_dict:
        num_dict[ch] += 1
    else:
        num_dict[ch] = 1

print(num_dict)

