#ch06ex04.py
#책장 리스트

bs=['파이썬','c','캐드','포토샵','java','엑셀']

print(bs)

bs.append('파워포인트')
print(bs)

bs.remove('java')
print(bs)

bs.insert(4,'일러스트')
print(bs)

cnt=len(bs)
print(cnt)

while True:
    pd=input('도서 이름: ')
    if pd in bs:
        print('대여 가능')
    else:
        print('대여 불가능')
