# 09c_calc.py
# 덧셈 문제 맞추기

import random

#정답 변수
sc=0

for x in range(5):
    n1=random.randint(20,30)
    n2=random.randint(1,20)

    u=int(input(f'{n1}+{n2}='))
    a=n1+n2

    if u==a:
        sc=sc+1
        print('천재구나')
    else:
        print('바보구나')

print()
print(f'정답: {sc}개')
if sc==5:
    print('개천재')
