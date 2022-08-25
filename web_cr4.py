#web_cr4.py
#다음 사전

import requests
from bs4 import BeautifulSoup
usr=input('번역할 단어를 입력하세요: ')
url=f'https://dic.daum.net/search.do?q={usr}'

resp=requests.get(url)

text=resp.text
html=BeautifulSoup(text,'html.parser')

block=html.find('div',class_='cleanword_type kuek_type')
words=block.find_all('li')

for one in words:
    txt=one.text
    print(txt)
