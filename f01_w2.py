#f01_w2.py
#파일 기록

f=open('mypitca2.txt','w')

while True:
    msg=input('기록 문장:')

    if msg=="":
        break

    f.write(msg+'/n')

f.close()
