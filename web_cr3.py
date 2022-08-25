#web_cr3.py
#주간날씨

import requests
from bs4 import BeautifulSoup

#1.주소설정
url='https://weather.naver.com/today/02173104'

#2.페이지 요청
resp=requests.get(url)

#3.구문분석
text=resp.text
html=BeautifulSoup(text,'html.parser')

#4.자료추출
box=html.find('ul', class_='week_list')
date=box.find_all('span',class_='date')
day=box.find_all('strong',class_='day')
low_t=box.find_all('span',class_='lowest')
hig_t=box.find_all('span',class_='highest')
loc=html.find('strong',class_='location_name')
loc_txt=loc.text
print(loc_txt)
for idx,one in enumerate(date):
    date_txt=one.text
    day_txt=day[idx].text
    low_txt=low_t[idx].text
    hig_txt=hig_t[idx].text
    
    print(f'{date_txt}{day_txt} {low_txt}/{hig_txt}')
