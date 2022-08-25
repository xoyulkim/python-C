#web_cr1.py
#네이버 날씨

import requests
from bs4 import BeautifulSoup

#1.주소 결정
url='http://weather.naver.com/today/02173104'

#2.페이지 요청
resp=requests.get(url)
#print(f'응답코드: {resp.status_code}')

#3.구문분석
text=resp.text
html=BeautifulSoup(text, 'html.parser')
print(html)

#4.날씨 정보 불러오기
loc=html.find('strong',class_='location_name')
loc_txt=loc.text
print(loc.text)
temp=html.find('strong',class_='current')
temp_txt=temp.text
print(temp_txt)
