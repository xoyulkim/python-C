f=open('file_ex04.txt','w')

for x in range(100):
    msg=f'{x+1}번 째 줄입니다.'
    print(msg)
    f.write(msg+'\n')

f.close()
