import sys

a = '/'.join(sys.argv[0].split('\\')[:-1])+'/'

x = open(a + 'ttt.mp4', 'rb')  # rb에서 b는 birnay파일을 읽겠다는 의미
a = input('새로운 이름을 입력하시오 : ')
a_open = open(a, 'wb')

while True:
    b = x.read(1024)
    if not b:
        break
    a_open.write(b)

x.close()
a_open.close()
print('복사완료.')
