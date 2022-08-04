# 06a_poly.py
# 오각형 그리기

import turtle as t

n=30
t.begin_fill()
t.color('purple')
for x in range(n):
    t.forward(10)
    t.left(360/n)
t.end_fill()

t.hideturtle() 
