#15a_p1.py
#태극 모양그리기

import turtle as t

t.speed(0)
t.bgcolor('black')

col=['red', 'yellow', 'blue']
for x in range(500):
    #색상 설정
    #print(col[x%3])
    t.color(col[x%3])
    t.forward(x)
    t.left(119)
