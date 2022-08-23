import random

n=[]
cnt=0

while cnt<6:
    p=random.randint(1,45)
    if p not in n:
        print(p)
        n.append(p)
        cnt+=1
        print('리스트에 추가 완료')

print(f'난수:{n}')
