#ch03ex01.py
#사다리꼴 면적 구하기

def tra(base, upper, height):
    a=int(((base+upper)*height)/2)
    return a

print('사다리꼴 면적은 구하는 프로그램')

print()
upper=int(input('윗변의 길이를 입력하세요:'))
base=int(input('밑변의 길이를 입력하세요:'))
height=int(input('높이를 입력하세요:'))

#s=int(((base+upper)*height)/2)

a=tra(base, upper, height)
print()
print(f'면적은 {a}입니다.')
