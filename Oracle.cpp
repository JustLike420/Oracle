#include <stdio.h>
#include <locale.h>

int zod;
void z_god(int mon, int day); // знак зодиака по китайскому календарю
int days(int year, int month, int d);
int main()
{
	setlocale(LC_ALL, "Russian");  //русский язык

	int today_d, today_m, today_y, birth_d, birth_m, birth_y, mon;

	printf("Пожалуйста введите следующие данные:\nСегодняшняя дата: дд.мм.гг\nДату совего дня рождения: дд.мм.гг\n");
	scanf("%d%d%d", &today_d, &today_m, &today_y);
	scanf("%d%d%d", &birth_d, &birth_m, &birth_y);
	
	printf("Ваш год по китайсому календарю:");              // Вывод названия года по китайскому календарю
	z_god(birth_y);                                         

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

	switch (zod)
	{
	case 1:
		printf("Your zodiac sign: Capricorn\n");
		break;
	case 2:
		printf("Your zodiac sign: Aquarius\n");
		break;
	case 3:
		printf("Your zodiac sign: Pisces\n");
		break;
	case 4:
		printf("Your zodiac sign: Aries\n");
		break;
	case 5:
		printf("Your zodiac sign: Taurus\n");
		break;
	case 6:
		printf("Your zodiac sign: Gemini\n");
		break;
	case 7:
		printf("Your zodiac sign: Cancer\n");
		break;
	case 8:
		printf("Your zodiac sign: Leo\n");
		break;
	case 9:
		printf("Your zodiac sign: Vrigo\n");
		break;
	case 10:
		printf("Your zodiac sign: Libra\n");
		break;
	case 11:
		printf("Your zodiac sign: Scorpio\n");
		break;
	case 12:
		printf("Your zodiac sign: Sagittarius\n");
		break;
	default:
		printf("ERROR");
		break;
	}

	switch (mon)
	{
	case 1:
		printf("Your year: cock\n");
		break;
	case 2:
		printf("Your year: dog\n");
		break;
	case 3:
		printf("Your year: pig\n");
		break;
	case 4:
		printf("Your year: rat\n");
		break;
	case 5:
		printf("Your year: bull\n");
		break;
	case 6:
		printf("Your year: tiger\n");
		break;
	case 7:
		printf("Your year: rabbit\n");
		break;
	case 8:
		printf("Your year: dragon\n");
		break;
	case 9:
		printf("Your year: snake\n");
		break;
	case 10:
		printf("Your year: horse\n");
		break;
	case 11:
		printf("Your year: goat\n");
		break;
	case 12:
		printf("Your year: monkey\n");
		break;
	default:
		printf("ERROR");
		break;
	}
	
	if (((birth_y % 4 == 0) && (birth_y % 100 != 0)) || (birth_y % 400 == 0))
	{
		printf("Leap year");
	}
	else
	{
		printf("Not leap year");
	}
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

 // знак зодиака по китайскому календарю
void z_god(int y){
	int god;
	god = y % 12;
	switch (god)
	{
	case 0:
		printf("Год обезьяны");
		break;
	case 1:
		printf("Год петуха");
		break;
	case 2:
		printf("Год собаки");
		break;
	case 3:
		printf("Год свиньи");
		break;
	case 4:
		printf("Год крысы");
		break;
	case 5:
		printf("Год быка");
		break;
	case 6:
		printf("Год тигра");
		break;
	case 7:
		printf("Год кролика");
		break;
	case 8:
		printf("Год дракона");
		break;
	case 9:
		printf("Год змеи");
		break;
	case 10:
		printf("Год лошади");
		break;
	case 11:
		printf("Год козы");
		break;
	}
}