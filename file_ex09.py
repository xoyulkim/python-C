#file_ex09.py
#학생정보 불러오기

f=open('file_ex03.txt','r')

data=f.readlines()
for one in data:
    name, score=one.split()
    score=int(score)
    print(f'학생이름: {name}, 성적: {score}')
f.close()
