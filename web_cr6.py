#web_cr6.py
#네이버 웹툰

import requests
from bs4 import BeautifulSoup

for x in range(1,21):
    url=f'https://comic.naver.com/webtoon/list?titleId=748105&page={x}'
    
    resp=requests.get(url)

    text=resp.text
    html=BeautifulSoup(text,'html.parser')

    block=html.find('table',class_='viewList')
    toons=block.find_all('td',class_='title')

    for one in toons:
        txt=one.text.strip()
        print(txt)
