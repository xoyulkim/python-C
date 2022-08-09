import turtle as t

def draw_rect(n):
    for x in range(n):
        t.forward(50)
        t.left(360/n)
    
def draw_tri(n):
    for x in range(n):
        t.forward(50)
        t.left(360/n)

draw_rect(4)
draw_tri(3)

#n 대신에 4,3 넣어도 됨

