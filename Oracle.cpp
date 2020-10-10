#include <stdio.h>
#include <locale.h>

int zodiak(int x, int y);   // Знак зодиака
int leap(int y);  // високосный/не високосный год
int z_god(int y); // знак зодиака по китайскому календарю
int days(int year, int month);
int main()
{
	setlocale(LC_ALL, "Russian");  //русский язык

	int today_d, today_m, today_y, birth_d, birth_m, birth_y, mon;

	printf("Пожалуйста введите следующие данные:\nСегодняшняя дата: дд.мм.гг\nДату совего дня рождения: \n");
	scanf("%d%d%d", &today_d, &today_m, &today_y);
	printf("Дату совего дня рождения: \n");
	scanf("%d%d%d", &birth_d, &birth_m, &birth_y);
	
	int year = birth_y;
	int days_v = 0;
	while (year < today_y)
	{
		days_v = days_v + days(year, 12);
		year++;
	}
	int day_t = days(today_y, today_m);
	int day_b = days(birth_y, birth_m);
	int age = days_v - day_b + day_t - birth_d + today_d;
	printf("Ваш возраст: %d дней\n", age);

	printf("Ваш год по китайсому календарю: ");                                            
	z_god(birth_y);

	leap(birth_y);

	printf("Ваш знак зодиака: "); 
	zodiak(birth_d, birth_m);
	
	printf("Programm was created by Vladimir Chigin"); // https://vk.com/just_like248
}

int days(int year, int month){
	int day_d = 0;
	int days_m_b = 0;
	while (month > day_d)
	{
		switch (day_d)
		{
		case 0:
			days_m_b += 31;
			break;
		case 1:
			days_m_b += 28;
			if (year % 4 == 0)
			{
				days_m_b++;
			}
			break;
		case 2:
			days_m_b += 31;
			break;
		case 3:
			days_m_b += 30;
			break;
		case 4:
			days_m_b += 31;
			break;
		case 5:
			days_m_b += 30;
			break;
		case 6:
			days_m_b += 31;
			break;
		case 7:
			days_m_b += 31;
			break;
		case 8:
			days_m_b += 30;
			break;
		case 9:
			days_m_b += 31;
			break;
		case 10:
			days_m_b += 30;
			break;
		case 11:
			days_m_b += 31;
			break;
		}
		day_d++;
	}
	return days_m_b;
}

int zodiak(int x, int y){   //x = day, y = mes
	if(((y == 1) && (x >= 20)) || ((y == 2) && (x <= 18))){
		printf("Водолей\n");
	}
	if(((y == 2) && (x >= 19)) || ((y == 3) && (x <= 20))){
		printf("Рыба\n");
	}
	if(((y == 3) && (x >= 21)) || ((y == 4) && (x <= 19))){
		printf("Овен\n");
	}
	if(((y == 4) && (x >= 20)) || ((y == 5) && (x <= 20))){
		printf("Телец\n");
	}
	if(((y == 5) && (x >= 21)) || ((y == 6) && (x <= 20))){
		printf("Близнецы\n");
	}
	if(((y == 6) && (x >= 21)) || ((y == 7) && (x <= 22))){
		printf("Рак\n");
	}
	if(((y == 7) && (x >= 23)) || ((y == 8) && (x <= 22))){
		printf("Лев\n");
	}
	if(((y == 8) && (x >= 23)) || ((y == 9) && (x <= 22))){
		printf("Дева\n");
	}
	if(((y == 9) && (x >= 23)) || ((y == 10) && (x <= 22))){
		printf("Весы\n");
	}
	if(((y == 10) && (x >= 23)) || ((y == 11) && (x <= 21))){
		printf("Скорпион\n");
	}
	if(((y == 11) && (x >= 22)) || ((y == 12) && (x <= 21))){
		printf("Стрелец\n");
	}
	if(((y == 12) && (x >= 22)) || ((y == 1) && (x <= 19))){
		printf("Козерог\n");
	}
}

int z_god(int y){
	int god;
	god = y % 12;
	switch (god)
	{
	case 0:
		printf("Год обезьяны\n");
		break;
	case 1:
		printf("Год петуха\n");
		break;
	case 2:
		printf("Год собаки\n");
		break;
	case 3:
		printf("Год свиньи\n");
		break;
	case 4:
		printf("Год крысы\n");
		break;
	case 5:
		printf("Год быка\n");
		break;
	case 6:
		printf("Год тигра\n");
		break;
	case 7:
		printf("Год кролика\n");
		break;
	case 8:
		printf("Год дракона\n");
		break;
	case 9:
		printf("Год змеи\n");
		break;
	case 10:
		printf("Год лошади\n");
		break;
	case 11:
		printf("Год козы\n");
		break;
	}
}

int leap(int y){

	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
	{
		printf("Это високосный год\n");
	}
	else
	{
		printf("Это не високосный год\n");
	}
}