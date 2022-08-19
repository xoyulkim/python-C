#17a_trun.py
#거북이 이동

import turtle as t
import random

#변수 초기화
score=0
playing=False

def turn_up():
    t.setheading(90)
def turn_down():
    t.setheading(-90)
def turn_left():
    t.setheading(180)
def turn_right():
    t.setheading(0)

def prn_msg(m1,m2):
    t.goto(0,100)
    t.write(m1,False, 'center', ('D2Coding',30))
    t.goto(0,-100)
    t.write(m2,False, 'center', ('D2Coding',15))

def start():
    global playing
    if playing==False:
        playing=True
        t.clear()
        play()

def play():
    #전역변수 선언
    global score, playing
    
    t.forward(10)
    
    #먹이 충돌 처리
    d=t.distance(te) #t와 te사이의 거리
    if d<12:
        #점수 처리
        score=score+1
        t.write(score)
        
        #먹이 이동
        te_x=random.randint(-230,230)
        te_y=random.randint(-230,230)
        te.goto(te_x,te_y)
        
        
    #악당 이동
    w=[1,2,3,4,5]
    q=random.choice(w)
    if q==2:
        ts_ang=ts.towards(t.pos())
        ts.setheading(ts_ang)
    ts_speed=score+5
    if ts_speed>10:
        ts_speed=10
        
    ts.forward(ts_speed)

    #악당 충돌
    d1=t.distance(ts)
    if d1<11:
       playing=False
       score=0
       prn_msg('GAME OVER', f'SCORE:{score}')

    #게임 진행
    if playing:
       t.ontimer(play,100)
   
    
#환경 설정
t.setup(500,500)
t.bgcolor('orange')

#ts거북이
ts=t.Turtle()
ts.shape('turtle')
ts.color('red')
ts.speed(0)
ts.up()
ts.goto(0,200)

#te먹이
te=t.Turtle()
te.shape('circle')
te.color('green')
te.speed(0)
te.up()
te.goto(0,-200)

#t
t.shape('turtle')
t.color('white')
t.speed(0)
t.up()

#키입력
t.onkeypress(turn_up, 'Up')
t.onkeypress(turn_down, 'Down')
t.onkeypress(turn_left, 'Left')
t.onkeypress(turn_right, 'Right')
t.onkeypress(start, 'space')
t.listen()

#시작화면
prn_msg('Turtle Run', 'SPACE')

t.goto(0,0)
