#13a_line.py
#태극 모양 그리기

import turtle as t

t.bgcolor('black')
t.color('yellow')

t.speed(0)
for x in range(500):
    if x%3==0:
        col='green'
    elif x%3==1:
        col='orange'
    else:
        col='blue'

    t.color(col)
    #print(f'x:{x}, x%3:{x%3}')
    t.forward(x)
    t.left(119)

 
        
    
