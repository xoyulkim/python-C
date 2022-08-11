import random

def make_quiz():
    n1=random.randint(10,20)
    n2=random.randint(1,10)
    q=f'{n1}-{n2}'
    return q

for x in range(5):
    quiz=make_quiz()
    print(quiz)
#a=eval(quiz)
    print(f'{quiz}={a}')
