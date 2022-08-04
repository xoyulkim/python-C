# ch01ex07.py
# BMI

print('체질량지수(BMI) 구하기')

print()
t=int(input('키:'))
w=int(input('몸무게:'))

t=t/100
bmi=int(w/(t*t))

print(f'당신의 체질량지수는 {bmi}입니다.')

if bmi>=30:
    m='비만'
elif bmi>=25:
    m='과체중'
elif bmi>=20:
    m='정상'
else:
    m='저체중'

print(f'당신은 {m}입니다.')
    

