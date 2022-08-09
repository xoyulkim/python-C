#10c_guess.py
#숫자 맞히기

import random

n=random.randint(1,100)
# print(f'n:{n}')

while True:
    u=int(input('1~100사이의 수:'))

    if n==u:
        break
    elif u>n:
        print('크다')
    else:
        print('작다')

# 정답일 경우 실행
print('정답!')

        

    
