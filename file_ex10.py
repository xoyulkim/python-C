f=open('file_ex03.txt','r')

s=0
c=0

data=f.readlines()
for one in data:
    name, score=one.split()
    score=int(score)
    print(f'학생이름: {name}')
    print(f'성적:{score}')
    s=s+score
    c=c+1
    
f_avg=s/c

print()
print(f'학급 총점: {s}')
print(f'학급 평균:{f_avg:.1f}')

f.close()
