
# Atcoder ABCの問題ページにアクセスする
# 特定のワードが含まれる問題をcsvファイルに出力する

import requests
from bs4 import BeautifulSoup
from dataclasses import dataclass
import csv
from time import sleep
from random import uniform

# 問題に含まれるワードを入力
# keyword = input('input word: ')
keywords = [
    "移動", "到達", "行ける", "道", "通路",
    "最短", "距離", "連結", "行き来", "一方通行",
    "N M", "A B", "u v", "上下左右", "マス",
    "迷路", "都市", "島", "部屋", "通れる", "Graph", "グラフ" ]
file_name = 'graph.csv'

# 参照範囲を設定
contest_range = range(200, 400)
level_range = ('c', 'd')


@dataclass(frozen=True)
class Contest:
    num: int
    level: str
    title: str
    url: str

def search_keywords_from_html_elements(title, html_elements) -> Contest | None:
    for element in elements:
        for row in element:
            for keyword in keywords:
                if keyword in row:
                    print(f"INFO: Found '{keyword}' in [ABC{num}-{title}]({url})")
                    return Contest(num, level, title, url)

    return None
                    

result = []
for num in contest_range:
    for level in level_range:

        # アクセス前に1秒前後待機
        sleep(uniform(0.8, 1.2))
        url = 'https://atcoder.jp/contests/abc' + str(num) + '/tasks/abc' + str(num) + '_' +level

        try:
            print(f"INFO: Send request to {url}")
            response = requests.get(url)
            response.raise_for_status()  # ステータスコードが200でない場合は、エラーを発生させる

            # BeautifulSoupオブジェクトを作成し、HTMLを解析
            soup = BeautifulSoup(response.text, 'html.parser')

            # 問題文を取得
            title = soup.find('span', class_='h2').text.split('\t')[3][:-1]
            elements = soup.find('div', class_='part').find_all()


            contest = search_keywords_from_html_elements(title, elements)
            if contest is not None:
                result.append(contest)


        # urlが存在しないときは無視
        except requests.exceptions.RequestException as e:
            print(f"INFO: Cannot access this URL '{url}': {e}")

with open(file_name, 'w', newline='', encoding='utf-8') as file:
    writer = csv.writer(file)
    writer.writerow(['num','level','title','url'])
    for contest in result:
        writer.writerow([contest.num,contest.level,contest.title,contest.url])

