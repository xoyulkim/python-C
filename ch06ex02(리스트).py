#ch06ex02.py
#카트 리스트-3

cart=['사과','메론','우유']

cnt=len(cart)
print(f'리스트 원소 개수: {cnt}개')

print()
while True:
    pd=input('확인할 물품:')
    if pd=='종료' : break
    if pd in cart:
        print('구매했습니다.')
    else:
        print('구매 전입니다.')
    
        


