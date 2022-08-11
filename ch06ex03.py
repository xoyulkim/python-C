import random


def make_quiz():
    num1=random.randint(10,20)
    num2=random.randint(1,9)
    op=random.randint(1,2)

    if op==1:
        ops='+'
    else:
        ops='-'

    q=f'{num1}{ops}{num2}'
    return q

for x in range(5):
    q=make_quiz()
    a=eval(q)
    print(f'{q}={a}')

