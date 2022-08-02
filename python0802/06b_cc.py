# 06b_cc.py
# 원 반복해 그리기

import turtle as t

n=50
t.bgcolor('black')
t.color('green')
t.speed(0)
for x in range(n):
    t.circle(100)
    t.left(360/n)
