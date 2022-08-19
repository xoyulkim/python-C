import turtle as t
import random

def play():
    t_speed=random.randint(5,10)
    ts_speed=random.randint(5,10)
    tr_speed=random.randint(5,10)
    t.forward(t_speed)
    ts.forward(ts_speed)
    tr.forward(tr_speed)
    t.ontimer(play,100)

def d_line(ty):
    t.speed(0)
    t.up()
    t.goto(350,ty)
    t.down()
    t.goto(-350,ty)
    t.color('white')

t.bgcolor('orange')
t.setup(700,300)

for ly in range(-75,76,50):
           d_line(ly)

ts=t.Turtle()
ts.shape('turtle')
ts.color('red')
ts.up()
ts.goto(-300,-50)

t.shape('turtle')
t.color('white')
t.up()
t.goto(-300,0)

tr=t.Turtle()
tr.shape('turtle')
tr.color('blue')
tr.up()
tr.goto(-300,50)

play()
