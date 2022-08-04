#09b_walk.py
# 메뉴 정하기

import turtle as t
import random

t.shape('turtle')
t.speed(0)

#십자선 그리기
t.forward(350)
t.backward(700)
t.forward(350)
t.left(90)
t.forward(350)
t.backward(700)

#메뉴 출력하기
t.up()
t.goto(350,350)
t.write('라면')
t.goto(-350,350)
t.write('피자')
t.goto(-350,-350)
t.write('햄버거')
t.goto(350,-350)
t.write('파스타')
t.goto(0,0)

#거북이 이동하기
t.down()
t.color('red')
for x in range(500):
    ang=random.randint(1,360)
    d=random.randint(1,20)
    t.setheading(ang)
    t.forward(d)
t.color('blue')
