# 04c_tt.py
# 도형 그리기

import turtle as t

# 한 변의 길이
d=100

# 삼각형 그리기
for x in range(3):
    t.forward(d)
    t.left(360/3)

# 사각형 그리기
for x in range(4):
    t.forward(d)
    t.left(360/4)

# 원 그리기
t.circle(d//2)
