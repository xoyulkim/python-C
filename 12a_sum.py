#12a_sum.py
#1~n 합 구하기 함수 sum_func(t_n)

def sum_func(n):
    s=0
    for x in range(n+1):
        s=s+x
        
    return s

def fact_func(n):
    a=1
    for x in range(1,n+1):
        a=a*x

    return a

print(sum_func(10))
print(sum_func(100))

print(fact_func(5))
print(fact_func(3))
