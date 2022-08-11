#14a_c1.py
#문제 생성하기

import random

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

print(quiz)
