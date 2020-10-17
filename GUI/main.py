import sys
from PyQt5 import QtCore, QtGui, QtWidgets
import gui1
from datetime import datetime

def zodiac(x , y):
    if (y == 1 and x >= 20) or (y == 2 and x <= 18):
        n = "Водолей"
        return n
    if (y == 2 and x >= 19) or (y == 3 and x <= 20):
        n = "Рыбы"
        return n
    if (y == 3 and x >= 21) or (y == 4 and x <= 19):
        n = "Овен"
        return n
    if (y == 4 and x >= 20) or (y == 5 and x <= 20):
        n = "Телец"
        return n
    if (y == 5 and x >= 21) or (y == 6 and x <= 20):
        n = "Блихнецы"
        return n
    if (y == 6 and x >= 21) or (y == 7 and x <= 22):
        n = "Рак"
        return n
    if (y == 7 and x >= 23) or (y == 8 and x <= 22):
        n = "Лев"
        return n
    if (y == 8 and x >= 23) or (y == 9 and x <= 22):
        n = "Дева"
        return n
    if (y == 9 and x >= 23) or (y == 10 and x <= 22):
        n = "Весы"
        return n
    if (y == 10 and x >= 23) or (y == 11 and x <= 21):
        n = "Скорпион"
        return n
    if (y == 11 and x >= 22) or (y == 12 and x <= 21):
        n = "Стрелец"
        return n
    if (y == 12 and x >= 22) or (y == 1 and x <= 19):
        n = "Козерог"
        return n

def leap(x):
    if ((x % 4 == 0) and (x % 100 != 0)) or (x % 400 == 0):
        n = "Это високосный год"
        return n
    else:
        n = "Это не високосный год"
        return n  

def naz_goda(x):
    god = ["Год обезьяны" , "Год петуха", "Год собаки", "Год свиньи", "Год крысы", "Год быка", 
          "Год тигра", "Год кролика", "Год дракона", "Год змеи", "Год лошади", "Год козы"]
    n = (god[x % 12])
    return n 

class ExapleApp(QtWidgets.QMainWindow, gui1.Ui_Dialog):
    def __init__(self):
        super().__init__()
        self.setupUi(self)
        self.build()

    def build(self):
        self.pushButton.clicked.connect(self.pres)

    def pres(self, event):

        d = int(self.lineEdit.text())     # получение дня
        m = int(self.lineEdit_2.text())   # получение месяца
        y = int(self.lineEdit_3.text())   # получение года

        a = datetime.now()
        b = datetime(y, m, d)
        c = a - b
        da = str(c.days)
        print(da)  
        zod = zodiac(d, m)
        lep1 = leap(y)
        god = naz_goda(y)

        self.lprint_1.setText(da)      # вывод кол-во дней
        self.lprint_2.setText(zod)      # вывод високосность
        self.lprint_3.setText(lep1)      # вывод зодиак
        self.lprint_4.setText(god)      # название года
        message = self.lineEdit.text()

        
    



def main():
    app = QtWidgets.QApplication(sys.argv)
    window = ExapleApp()
    window.show()
    app.exec_()

if __name__ == '__main__':
    main()