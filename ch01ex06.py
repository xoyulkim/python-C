# ch01ex06.py
# 커피 판매 이익 구하기

print("일일 판매량을 입력하세요.")
ame=int(input("아메리카노 판매 수:"))
caf=int(input("카페라떼 판매 수:"))
cap=int(input("카푸치노 판매 수:"))

day=ame*2000+caf*3000+cap*3500
month=day*30

print()
print(f'일일 판매 매출액은 {day}입니다.')
print(f'한 달 30일 기준 예상 매출액은 {month}입니다.')

print()
p=int(input("예상 지출액을 입력하세요:"))
print(f'한달 예상 순이익은 {month-p}입니다.')

      

