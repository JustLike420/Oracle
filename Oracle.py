from datetime import datetime

def zodiac(x , y):
    if (y == 1 and x >= 20) or (y == 2 and x <= 18):
        print("Водолей")
    if (y == 2 and x >= 19) or (y == 3 and x <= 20):
        print("Рыбы")
    if (y == 3 and x >= 21) or (y == 4 and x <= 19):
        print("Овен")
    if (y == 4 and x >= 20) or (y == 5 and x <= 20):
        print("Телец")
    if (y == 5 and x >= 21) or (y == 6 and x <= 20):
        print("Блихнецы")
    if (y == 6 and x >= 21) or (y == 7 and x <= 22):
        print("Рак")
    if (y == 7 and x >= 23) or (y == 8 and x <= 22):
        print("Лев")
    if (y == 8 and x >= 23) or (y == 9 and x <= 22):
        print("Дева")
    if (y == 9 and x >= 23) or (y == 10 and x <= 22):
        print("Весы")
    if (y == 10 and x >= 23) or (y == 11 and x <= 21):
        print("Скорпион")
    if (y == 11 and x >= 22) or (y == 12 and x <= 21):
        print("Стрелец")
    if (y == 12 and x >= 22) or (y == 1 and x <= 19):
        print("Козерог")

def leap(x):
    if ((x % 4 == 0) and (x % 100 != 0)) or (x % 400 == 0):
        print("Это високосный год")
    else:
        print("Это не високосный год")

def naz_goda(x):
    god = ["Год обезьяны" , "Год петуха", "Год собаки", "Год свиньи", "Год крысы", "Год быка", 
           "Год тигра", "Год кролика", "Год дракона", "Год змеи", "Год лошади", "Год козы"]
    print(god[x % 12])
    
print("Введите свою дату рождения")
year = int(input())
month = int(input())
day = int(input())

a = datetime.now()
b = datetime(year, month, day)   

c = a - b  #разница
print(c.days)
zodiac(day, month)
leap(year)
naz_goda(year)

