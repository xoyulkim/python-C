c=0
s=0

while True:
    score=int(input('점수를 입력하세요:'))
    if score<=0:
        break

    c=c+1
    s=score+s

print(f'입력한 점수의 평균은 {s/c}점 입니다.')
