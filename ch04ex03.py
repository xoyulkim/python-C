#ch04ex03.py
#도형 그리기

import turtle as t

def move(x,y):
    t.up()
    t.goto(x,y)
    t.down()

def draw_rect(x,y,d):
    move(x,y)

    t.begin_fill()
    for x in range(4):
        t.forward(d)
        t.left(90)
    t.end_fill()

def draw_tri(x,y,d):
    move(x,y)

    for x in range(3):
        t.forward(d)
        t.left(120)

t.color('green')
draw_rect(200,200,100)
t.color('red')
draw_rect(-200,-200,100)
t.color('orange')
draw_rect(-200,200,100)
t.color('blue')
draw_rect(200,-200,100)

