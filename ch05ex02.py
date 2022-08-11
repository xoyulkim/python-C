animal=['곰','강아지','고양이','사자','호랑이','여우','늑대','원숭이','뱀']

import random

for one in animal:
    print(one)

cnt=len(animal)
print(f'animal 리스트 개수: {cnt}개')
for x in range(cnt):
    p=random.choice(animal)
    a=input(f'{p} 좋아하세요?')
    print()

    if a=='네':
        print(f'{p} 좋아요.')
    else:
        print(f'{p} 싫어요.')
