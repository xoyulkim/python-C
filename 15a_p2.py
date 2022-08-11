import turtle as t

t.speed(0)
t.bgcolor('black')

col=['red', 'yellow', 'blue', 'green']
for x in range(630):
    t.color(col[x%4])
    t.forward(x)
    t.left(89)
