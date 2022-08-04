# ch04ex01.py
# 평균계산기

s=0
c=0
while True:
    score=int(input('점수를 입력하세요:'))
    if score<=0:
        break
    
    s=s+score
    c=c+1
    
avg=int(s/c)

print()
print(f'입력한 점수의 평균은 {avg}점 입니다.')

    
