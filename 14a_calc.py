#14a_calc.py
#계산 문제 맞히는 게임

import random
import time

def make_quiz():
    n1=random.randint(10,20)
    n2=random.randint(1,10)
    op=random.randint(1,3)

    if op==1:
        ops='+'
    elif op==2:
        ops='-'
    else:
        ops='*'

    q=f'{n1}{ops}{n2}'
    return q

sc1=0
sc2=0

start=time.time()

for x in range(5):
    q=make_quiz()
    a=eval(q)
    u=int(input(f'{q}='))
    if u==a:
        print('정답')
        sc1=sc1+1
    else:
        print('땡')
        sc2=sc2+1
    
end=time.time()
et=int(end-start)

print()
if sc2==0 and et<10:
    print('너 개천재')

print(f'정답{sc1}개, 오답{sc2}개')
print(f'풀이시간: {et}초')

    
