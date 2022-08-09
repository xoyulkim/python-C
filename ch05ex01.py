#ch05ex01.py
#태극모양 그리기

import turtle as t

t.bgcolor('black')
t.speed

for x in range(500):
    if x%4==0:
        col='red'
    elif x%4==1:
        col='green'
    elif x%4==2:
        col='yellow'
    else:
        col='blue'

    t.forward(x)
    t.left(89)
    t.color(col)
    
