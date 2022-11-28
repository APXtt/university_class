import csv
import sys

a = '/'.join(sys.argv[0].split('\\')[:-1])+'/'
month = 0

file = open(a + "weather.csv", encoding="utf-8")
data = csv.reader(file)
attr = next(data)

tem = []
for i in data:
    for ii in range(1, 13):
        if i[0][5:7] == str(ii).zfill(2) and i[4] != '':
            if month == 0:
                month = ii
            tem.append(float(i[4]))

        print("{0}월 최고기온 :".format(month), max(tem))
        month = 0
        tem = []

file.close()
