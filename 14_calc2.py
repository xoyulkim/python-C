#14_calc2.py
#계산 문제 맞히기

import random
import time

#문제 출력 함수
def make_quiz():
    n1=random.randint(10,20)
    n2=random.randint(1,10)
    op=random.randint(1,4)

    if op==1:
        ops='+'
    elif op==2:
        ops='-'
        if n1<n2:
            n1,n2=n2,n1 # n1이 n2보다 작을 때 n1과 n2 자리 바꾸기 
    elif op==3:
        ops='*'
    else:
        ops='//'

    q=f'{n1}{ops}{n2}'
    return q

#변수 초기화
sc1=0
sc2=0

#시작 시간
start=time.time()

#문제 출제
for x in range(5):
    q=make_quiz()
    a=eval(q)
    u=int(input(f'{q}='))
    if a==u:
        sc1=sc1+1
        print('정답')
    else:
        sc2=sc2+1
        print('너 바보')      

#종료 시간
end=time.time()
et=end-start

print(f'풀이시간: {et:1f}초')
print(f'정답수{sc1}개, 오답수{sc2}개')
#문제 풀이 결과 출력
