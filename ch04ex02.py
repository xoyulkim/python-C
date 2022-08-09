#ch04ex02.py
#도형 그리기

import turtle as t

def draw_rect(n):
    for x in range(4):
        t.forward(n)
        t.left(90)

#def draw_tri(n):
    #for x in range(3):
        #t.forward(n)
        #t.left(120)

#draw_rect(100)
#draw_tri(90)

t.speed(0)
for x in range(10,200,10):
    draw_rect(x)

t.back(200)
t.speed(0)
for x in range(10,200,10):
    draw_rect(x)

  
