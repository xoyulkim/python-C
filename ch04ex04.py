import turtle as t

def move_t(x,y):
    t.up()
    t.goto(x,y)
    t.down()

def draw_poly(n,d,x,y):
    move_t(x,y)
    for x in range(n):
        t.forward(d)
        t.left(360/n)

for x in range(3,18):
    draw_poly(x,50,150,150)

