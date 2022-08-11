import random

def make_quiz():
    n1=random.randint(10,20)
    n2=random.randint(1,10)
    
    op=['+','-','*']
    a=random.choice(op)
    q=f'{n1}{a}{n2}'

    #인덱스 사용
    #op=random.randint(0,2)
    #ops=['+','-','*'][op]
    
    return q


for x in range(5):
    q=make_quiz()
    print(q)
