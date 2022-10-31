import os

_dir = os.getcwd()  # 현재 디렉토리
print('현재 디렉토리 :', _dir)

os.chdir('data')  # /data로 디렉토리 이동

for filename in os.listdir():  # 이동된 디렉토리의 파일/폴더들 확인
    if os.path.isfile(filename):  # 파일만 확인
        if filename.endswith('.txt'):  # .txt 화장자 파일 확인
            print('txt File :', filename)
        else:
            print('File :', filename)

    else:
        print('folder :', filename)
