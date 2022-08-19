#17a_trun.py
#터틀런

import turtle as t
import random

#거북이 방향 전환 함수 구현
def turn_up():
    t.setheading(90)
def turn_down():
    t.setheading(-90)
def turn_left():
    t.setheading(180)
def turn_right():
    t.setheading(0)

def play():
    t.forward(1)

    d=t.distance(te)
    if d<12:
        te_x=random.randint(-230,230)
        te_y=random.randint(-230,230)
        te.goto(te_x,te_y)

    ts_ang=ts.towards(t.pos())
    ts.setheading(ts_ang)
    ts.forward(6)

    d1=t.distance(ts)
    if d1>11:
        t.ontimer(play,100)

t.setup(500,500)
t.bgcolor('orange')

ts=t.Turtle()
ts.shape('turtle')
ts.color('red')
ts.speed(0)
ts.up()
ts.goto(0,200)

te=t.Turtle()
te.shape('circle')
te.color('green')
te.speed(0)
te.up()
te.goto(0,-200)

t.shape('turtle')
t.color('white')
t.speed(0)
t.up()

t.onkeypress(turn_up, 'Up')
t.onkeypress(turn_down, 'Down')
t.onkeypress(turn_left, 'Left')
t.onkeypress(turn_right, 'Right')
t.listen()


play()
