grades=[80,95,77,82,99]

s=0
c=0

for idx,one in enumerate(grades):
    s=s+one #s+=one
    c=c+1   #c+=1
    print(f'{idx+1}번 {one}')

a=s/c
print(f'총점:{s}점, 평균:{a}점')

sc=[90,80,70,50,60]
sc_sum=sum(sc)
sc_cnt=len(sc)
sc_avg=sc_sum/sc_cnt
print(f'총점:{sc_sum}점, 평균:{sc_avg}점')
