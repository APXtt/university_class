from tkinter import *

window = Tk()
window.title("BMI계산기")
window.geometry("220x100+100+100")


def checkBMI():
    result = 0
    height = int(input1.get())
    weight = int(input2.get())
    BMI = weight / (height/100)**2

    if BMI <= 18.5:
        result = "저체중"
    elif 18.5 < BMI <= 22.9:
        result = "정상"
    elif 23 <= BMI <= 24.9:
        result = "과체중"
    elif BMI >= 25:
        result = "비만"
    else:
        result = "error"

    label3["text"] = "판정결과 : {0} 수치 : {1}".format(result, BMI)


label = Label(window, text="키")
label_2 = Label(window, text="cm")
label2 = Label(window, text="몸무게")
label2_2 = Label(window, text="kg")
input1 = Entry(window)
input2 = Entry(window)
button = Button(window, text="판정하기", command=checkBMI)
label3 = Label(window, text="판정결과 : ")

label.grid(row=0, column=0)
label_2.grid(row=0, column=2)
label2.grid(row=1, column=0)
label2_2.grid(row=1, column=2)
input1.grid(row=0, column=1)
input2.grid(row=1, column=1)
button.grid(row=2, column=1)
label3.grid(row=3, column=1)

window.mainloop()
