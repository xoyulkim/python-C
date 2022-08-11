#14a_c3.py
#문제와 답 출력하기

import random

def make_quiz():
    n1=random.randint(1,10)
    n2=random.randint(1,10)
    op=random.randint(1,3)
    if op==1:
        ops='+'
    elif op==2:
        ops='-'
    else:
        ops='*'
    quiz=f'{n1}{ops}{n2}'
    return quiz

for x in range(10):
    quiz=make_quiz()
    ans=eval(quiz)
    print(f'{quiz}={ans}')
    
