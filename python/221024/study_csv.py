import csv
import sys

a = '/'.join(sys.argv[0].split('\\')[:-1])+'/'

f = open(a + 'weather.csv', 'r', encoding='utf-8')
rdr = csv.reader(f)

for line in rdr:
    print(line)

f.close()
