# -*- coding: utf-8 -*-
from requests_html import HTMLSession
import csv

session = HTMLSession()

file = open('2018.csv', 'w', newline='')
csvwriter = csv.writer(file)
csvwriter.writerow(['科类','院系', '专业', '最高分', '最低分', '平均分', '省份', '年份'])

links = ['http://admission.sysu.edu.cn/zs01/zs01c/beijing/1136901.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/zhejiang/1136947.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/hebei/1136940.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/tianjin/1136943.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/shanghai/1136938.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/chongqing/1136961.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/guangdong/1136663.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/shandong/1136936.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/jiangsu/1136929.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/sichuan/1136942.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/henan/1136922.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/shanxi/1136933.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/shanx/1136937.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/liaoning/1136931.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/qinghai/1136935.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/qinghai/1136935.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/ningxia/1136934.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/neimenggu/1136932.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/jiangxi/1136930.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/jilin/1136926.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/hunan/1136925.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/hubei/1136924.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/heilongjiang/1136923.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/hainan/1136920.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/anhui/1136900.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/yunnan/1136946.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/guizhou/1136918.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/guangxi/1136910.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/xinjiang/1136945.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/gansu/1136903.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/fujian/1136902.htm',
         'http://admission.sysu.edu.cn/zs01/zs01c/xizang/1136944.htm',
         ]

for link in links:
    r = session.get(link)
    for i in range(80):
        shengfen = r.html.find('#cont > h1', first = True)
        kelei = r.html.find('#cont > table > tbody > tr:nth-child('+ str(i+3)+') > td:nth-child(1) > span > span', first=True)
        yuanxi = r.html.find('#cont > table > tbody > tr:nth-child('+ str(i+3)+') > td:nth-child(2) > span > span', first=True)
        zhuanye = r.html.find('#cont > table > tbody > tr:nth-child('+ str(i+3)+') > td:nth-child(3) > span > span', first=True)
        high = r.html.find('#cont > table > tbody > tr:nth-child('+ str(i+3)+') > td:nth-child(4) > span > span', first=True)
        low = r.html.find('#cont > table > tbody > tr:nth-child('+ str(i+3)+') > td:nth-child(5) > span > span', first=True)
        avg = r.html.find('#cont > table > tbody > tr:nth-child('+ str(i+3)+') > td:nth-child(6) > span > span', first=True)
        if kelei and yuanxi and zhuanye and high and low and avg:
            csvwriter.writerow([kelei.text, yuanxi.text, zhuanye.text, high.text, low.text, avg.text, shengfen.text.split('（')[1].split('）')[0], '2018'])
        elif kelei and yuanxi and zhuanye and high and low:
            csvwriter.writerow([' ',kelei.text, yuanxi.text, zhuanye.text, high.text, low.text,shengfen.text.split('（')[1].split('）')[0], '2018'])
        else:
            pass

file.close()
