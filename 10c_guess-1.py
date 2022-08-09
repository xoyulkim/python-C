import random

n=random.randint(1,100)
#print(f'n:{n}')

while True:
    u=int(input('1~100사이의 수:'))

    a=abs(u-n)

    m=''
    if a>=20:
        m='너무'

    if u>n:
        print(f'{m}크다')
    elif u<n:
        print(f'{m}크다')
    else:
        break
    
print('정답!')
      
