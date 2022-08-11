import random
import time

#문제 리스트 생성
word=['복숭아','망고','mango','영화','movie','peach','파이썬']

#변수 초기화
n=1
a=random.choice(word)

#시작 안내 및 시간 측정
input('준비 되면 엔터')
start=time.time()

#타자 게임 메인 루프
while n<6:
    print(a)
    p=input()
    if a==p:
        print('정답')
        a=random.choice(word)
        n=n+1
    else:
        print('오타 다시해')
    
end=time.time()
et=end-start
print(f'타자 시간: {et:.1f}초')
