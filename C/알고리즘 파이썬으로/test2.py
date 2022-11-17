import cv2

CHARS = ' .,-~:;=!*#%@'                                       # 특수문자 13가지
nw = 100

# 1.jpg 이미지 파일 불러오기
img = cv2.imread('a.jpg')
img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)         # 불러온 이미지 파일을 흑백으로 변환

h, w = img.shape
nh = int(h / w * nw)

# 이미지 사이즈(비율), nw = 가로, nh = 세로
img = cv2.resize(img, (nw * 2, nh))

for row in img:
    for pixel in row:                                               # pixel 0-255 -> CHARS 0-12
        index = int(pixel / 256 * len(CHARS))                # 0~255 : 256개
        # 특수문자 출력 후, 줄바꾸지 않기
        print(CHARS[index], end='')

    print()
