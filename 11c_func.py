#11c_func.py
#반환값이 있는 함수

def square(n):
    r=n*n
    return r

def tri(b,h):
    a=int(b*h/2)
    return a

n=5  
r=square(n)
print(r)

print(square(4))


t1=tri(5,10)
print(f'삼각형 넓이:{t1}')

#반환값을 만들거나, 직접 print 하거나 
