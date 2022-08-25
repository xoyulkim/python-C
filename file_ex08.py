#file_ex08.py
#파일 복사하기

s_f=open('file_ex04.txt','r')
d_f=open('file_ex04_cp.txt','w')

for one in s_f:
    d_f.write(one)

print('파일 복사 완료')

d_f.close()
s_f.close()
