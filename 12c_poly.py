#12c_poly.py
# 도형 그리기

import turtle as t

def polygon(n):
    for x in range(n):
        t.forward(100)
        t.left(360/n)

def polygon2(n,d):
    for x in range(n):
        t.forward(d)
        t.right(360/n)

polygon(3)
polygon(4)
polygon(5)

t.up()
t.forward(200)

polygon2(3,50)
polygon2(4,50)
polygon2(5,50)
