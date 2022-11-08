import sys

here_dir = '/'.join(sys.argv[0].split('\\')[:-1])+'/'

number = []
count = 0

for i in range(1, 101):
    if i % 3 == 0:
        number.append(i)

with open(here_dir + 'number.txt', 'w') as f:
    for i in number:
        f.write(str(i)+',')

with open(here_dir + 'number.txt', 'r') as f:
    file = f.read()
    number = file.split(',')
    for i in number:
        if i != '':
            if int(i) % 5 == 0:
                count += 1
                print("5의 배수 : {0}".format(i))
    print("5의 배수의 개수 : {0}".format(count))
