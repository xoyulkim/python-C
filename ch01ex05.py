# ch01ex05.py
# BMI

print("체질량지수(BMI) 구하기")
print()
t=int(input("키:"))
w=int(input("몸무게:"))
t=t/100
print()
bmi=w/(t*t)
print(f'당신의 체질량지수는 {bmi}')
