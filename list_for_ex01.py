#list_for_ex01.py
#학생 성적표 출력

grades=[80,95,77,82,99]

for idx, one in enumerate(grades):
    print(f'{idx+1}번 {one}')
                     #{grades[idx]}로 써도 됨
