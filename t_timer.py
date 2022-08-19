import turtle as t

t.bgcolor('orange')
t.setup(900,500)

def play():
    t.forward(10)
    #print(f'xcor:{t.xcor()}')
    #if t.xcor()>430:
        #t.goto(-430,0)
    if t.xcor()<430:
        t.ontimer(play,100)
        
t.up()
t.shape('turtle')
t.speed(0)
t.color('white')
t.goto(-400,0)

play()
