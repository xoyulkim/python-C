#18_a.py
#global 함수

def f():
    global a
    a=a+1
    print(a)

a=0
f()
f()
f()
f()
