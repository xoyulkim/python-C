#ch06ex01.py
#카트 리스트-1

cart=[]
cart.append('사과')
cart.append('수박')

pack=[]
pack.append('홈런볼')
pack.append('우유')

print(f'{cart} 리스트에 원소 추가하기')
print(pack)

cart=cart+pack #cart+=pack 도 가능
print(f'{cart} 리스트 결합하기')

cart[1]='메론'
print(f'{cart} 리스트 원소 교체하기')

del cart[2]
print(cart)

cart.insert(2,'요거트')
print(cart)

cart.remove('요거트')
print(cart)

#카트 물품 개수 구하기
cnt=len(cart)
print(f'카트 목록 수:{cnt} 개')

#카트 물품 확인하기
print('우유'in cart)
print('사과'in cart)
print('포도'in cart)

if '우유' in cart:
    print('있어 !')
else:
    print('없어 ㅜㅜ')
