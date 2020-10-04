#include <stdio.h>
#include <locale.h>

int zod;
int zodiak(int x, int y);
int leap(int y);
int z_god(int y); // знак зодиака по китайскому календарю
int days(int year, int month, int d);
int main()
{
	setlocale(LC_ALL, "Russian");  //русский язык

	int today_d, today_m, today_y, birth_d, birth_m, birth_y, mon;

	printf("Пожалуйста введите следующие данные:\nСегодняшняя дата: дд.мм.гг\nДату совего дня рождения: дд.мм.гг\n");
	scanf("%d%d%d", &today_d, &today_m, &today_y);
	scanf("%d%d%d", &birth_d, &birth_m, &birth_y);
	
	printf("Ваш год по китайсому календарю:");                                            
	z_god(birth_y);
	leap(birth_y);

	int year = birth_y;
	int days_v = 0;
	bool d_n = false;
	int case_m = 0;
	int B_m, T_m;
	while (year < today_y)
	{
		days_v = days_v + days(year, 12, birth_d);
		year++;
	}
	int day_d = 0, days_m_b = 0, days_m_t = 0;
	day_d = 0;
	int day_t = days(today_y, today_m, birth_d);
	int day_b = days(birth_y, birth_m, birth_d);
	int age = days_v - day_b + day_t - birth_d + today_d;
	printf("Your age %d days\n", age);

	
	printf("Programm was created by Vladimir Chigin"); // https://vk.com/just_like248
}

int days(int year, int month, int d){
	int day_d = 0;
	int days_m_b = 0;
	while (month > day_d)
	{
		switch (day_d)
		{
		case 0:
			days_m_b += 31;
			if (d < 20)
			{
				zod = 1; //Capricorn
			}
			else
			{
				zod = 2; //Aquarius
			}
			break;
		case 1:
			days_m_b += 28;
			if (year % 4 == 0)
			{
				days_m_b++;
			}
			if (d > 19)
			{
				zod = 3; //Pisces
			}
			break;
		case 2:
			days_m_b += 31;
			if (d > 20)
			{
				zod = 4; //Aries
			}
			break;
		case 3:
			days_m_b += 30;
			if (d > 20)
			{
				zod = 5; //Taurus
			}
			else
			{
				zod = 4; //Aries
			}
			break;
		case 4:
			days_m_b += 31;
			if (d > 22)
			{
				zod = 6; //Gemini
			}
			break;
		case 5:
			days_m_b += 30;
			if (d > 21)
			{
				zod = 7; //Cancer
			}
			break;
		case 6:
			days_m_b += 31;
			if (d > 23)
			{
				zod = 8; // Leo
			}
			break;
		case 7:
			days_m_b += 31;
			if (d > 24)
			{
				zod = 9; //Vrigo
			}
			break;
		case 8:
			days_m_b += 30;
			if (d > 24)
			{
				zod = 10; //Libra
			}
			break;
		case 9:
			days_m_b += 31;
			if (d > 24)
			{
				zod = 11; //Scorpio
			}
			break;
		case 10:
			days_m_b += 30;
			if (d < 23)
			{
				zod = 12; //Sagittarius
			}
			break;
		case 11:
			days_m_b += 31;
			if (d > 23)
			{
				zod = 1; // Capricorn
			}
			break;
		}
		day_d++;
	}
	return days_m_b;
}

int zodiak(int x, int y){   //x = day, y = mes
	if(((y == 01) && (x > 19)) || ((y == 02) && (x < 19))){
		printf("Вы водолей\n");
	}
	if(((y == 02) && (x > 19)) || ((y == 02) && (x < 19))){
		printf("Вы водолей\n");
	}
	if(((y == 03) && (x > 19)) || ((y == 04) && (x < 19))){
		printf("Вы водолей\n");
	}
	if(((y == 04) && (x > 19)) || ((y == 05) && (x < 19))){
		printf("Вы водолей\n");
	}
	if(((y == 05) && (x > 19)) || ((y == 06) && (x < 19))){
		printf("Вы водолей\n");
	}
	if(((y == 06) && (x > 19)) || ((y == 07) && (x < 19))){
		printf("Вы водолей\n");
	}
	if(((y == 07) && (x > 19)) || ((y == 08) && (x < 19))){
		printf("Вы водолей\n");
	}
	if(((y == 08) && (x > 19)) || ((y == 09) && (x < 19))){
		printf("Вы водолей\n");
	}
	if(((y == 09) && (x > 19)) || ((y == 10) && (x < 19))){
		printf("Вы водолей\n");
	}
	if(((y == 10) && (x > 19)) || ((y == 11) && (x < 19))){
		printf("Вы водолей\n");
	}
	if(((y == 11) && (x > 19)) || ((y == 12) && (x < 19))){
		printf("Вы водолей\n");
	}
	if(((y == 12) && (x > 19)) || ((y == 01) && (x < 19))){
		printf("Вы водолей\n");
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
		printf("Это високосный год");
	}
	else
	{
		printf("Это не високосный год");
	}
}

/*
20.01 января - 18.02 февраля - Водолей

19.02 февраля - 20.03 марта - Рыбы

21 21.03 - 20.04 апреля - Овен

21.04 апреля - 20.05 мая - Телец

21.05 мая - 20.06 июня - Близнецы

21.06 июня - 20.07 июля - Рак

21.07 июля - 21.08 августа - Лев

22.08 августа - 21.09 сентября - Дева

22.09 сентября - 22.10 октября - Весы

23.10 октября - 21.11 ноября - Скорпион

22.11 ноября - 20.12 декабря - Стрелец

21.12 декабря - 19.01 января - Козерог
*/