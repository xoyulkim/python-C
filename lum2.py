#lum2.py
#난수

import random

#1. 1~45 숫자 목록 만들기
n=list(range(1,46))
print(n)

#2. 목록 섞기
random.shuffle(n)

#3. 6개 출력하기
print(n[:6])
