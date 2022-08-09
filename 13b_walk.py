#13b_walk.py
#키 입력하기

import turtle as t

def t_up():
    t.setheading(90)
    t.forward(10)

def t_down():
    t.setheading(270)
    t.forward(10)

def t_left():
    t.setheading(180)
    t.forward(10)

def pen_up():
    t.up()

def pen_down():
    t.down()

t.shape('turtle')
t.speed(0)

t.onkeypress(t_up,'Up')
t.onkeypress(t_down,'Down')
t.onkeypress(t_left, 'Left')
t.onkeypress(pen_up, 'u')
t.onkeypress(pen_down,'d')
t.listen()


