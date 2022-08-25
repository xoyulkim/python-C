#file_ex07.py
#파일 불러오기

f=open('file_ex04.txt', 'r')

#for one in f:
    #print(one, end='')

data=f.readlines()
print(data)

f.close()
