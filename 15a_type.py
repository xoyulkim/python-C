import random
import time

word=['사과', '복숭아', '수박', '망고', '바나나']

#단어 섞기
random.shuffle(word)

n=1
q=word[n]

input('준비 되면 엔터')

start=time.time()

while n<6:
    print(f'문제 {n}')
    print(q)
    u=input()
    if u==q:
        n=n+1
        print('통과')
        print()
        q=w[n]
    else:
        print('오타 다시 도전')
    
end=time.time()
et=end-start
print(f'타자시간: {et:.1f}초')
