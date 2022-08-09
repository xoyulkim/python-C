# ch01ex04.py
# 화폐 교환기

pay=int(input('교환할 금액을 입력하세요: '))

print()
print(f'교환금액: {pay}')
change=pay
print(f'50000원: {change//50000}')
change=change%50000
print(f'10000원: {change//10000}')
change=change%10000
print(f'5000원: {change//5000}')
change=change%5000
print(f'1000원: {change//1000}')
change=change%1000
print(f'기타: {change}')
