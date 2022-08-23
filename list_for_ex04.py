grades=[80,95,77,82,99]

for idx, one in enumerate(grades):
    print(f'{idx+1}번 {one}')

print()
print('성적 업데이트 후')

for idx, one in enumerate(grades):
    grades[idx]=one+5
    if grades[idx]>100:
        grades[idx]=100
        
    print(f'{idx+1}번 {grades[idx]}')
