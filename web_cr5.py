#web_cr5.py
#네이버 영화

import requests
from bs4 import BeautifulSoup
date=input('조회할 날짜를 입력하세요: ')
url=f'https://movie.naver.com/movie/sdb/rank/rmovie.naver?sel=cnt&tg=0&date={date}'

mv_f=open(f'{date}_rank.txt','w') #조회일_rank.txt 파일을 만든 것

resp=requests.get(url)

text=resp.text
html=BeautifulSoup(text,'html.parser')

block=html.find('table',class_='list_ranking')
movies=block.find_all('div',class_='tit3')

mv_f.write('네이버 영화순위')
mv_f.write(date+'\n')
for idx,one in enumerate(movies):
    no=idx+1
    txt=one.text.strip()
    msg=f'{no}.{txt}'
    print(msg)
    mv_f.write(msg+'\n')

mv_f.close()
