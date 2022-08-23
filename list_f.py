#list_f2.py
#성적 수정

s=[90,80,70,60,50]

#성적 5점 추가 업데이트-틀린 방법 cuz list [s]에 다시 넣어주지 않음 
for one in s:
    one=one+5
    print(one)

print(f'성적 리스트:{s}')

print('-'*30)
#성적 5점 추가 업데이트-맞는 방법
for idx,one in enumerate(s):
    s[idx]=one+5
    print(s[idx])

print(f'성적 리스트:{s}')
