#list_for1.py
#리스트 원소

s=[80,90,70,100,60]

#리스트 원소 출력하기
for one in s:
    print(one)

print('-'*30)
#리스트 원소 출력하기(인덱스 사용)
cnt=len(s)
for idx in range(cnt):
    one=s[idx]
    print(f'idx:{idx}, one:{one}')

print('-'*30)
#리스트 원소 출력(열거 함수 사용)
for idx,one in enumerate(s):
    print(f'idx:{idx}, one:{one}')
