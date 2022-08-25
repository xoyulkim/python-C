#web_cr2.py
#미세먼지

import requests
from bs4 import BeautifulSoup

#1.주소결정
url='https://weather.naver.com/air/02173104'

#2.페이지 요청
wresp=requests.get(url)

#3.구문분석
text=resp.text
html=BeautifulSoup(text,'html.parser')
print(html)

#4.자료추출
loc=html.find('strong', class_='location_name')
loc_txt=loc.text
print(loc.text)
print('미세먼지 정보')
dust=html.find('em',class_='grade_value level4_1')
dust_txt=dust.text.strip() #양끝 \n 제거하기 
dv, dj=dust.text.split() #값과 판정 분류하기
print(dv,dj)
