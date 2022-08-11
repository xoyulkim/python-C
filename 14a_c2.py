#14a_c2.py
#문제 생성

import random

n1=random.randint(1,10)
n2=random.randint(1,10)
op=random.randint(1,3)
quiz=str(n1) #정수를 문자로 변환 
if op==1:
    quiz=quiz+'+'
elif op==2:
    quiz=quiz+'-'
else:
    quiz=quiz+'*'
quiz=quiz+str(n2)

print(quiz)
