#include <stdio.h>
int zod;
int days(int year, int month, int d)
{
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

int main()
{
	int mon;
	int today_d, today_m, today_y, birth_d, birth_m, birth_y;
	printf("Please enter\nwhat date today: dd.mm.yyyy\ndate of your birth: dd.mm.yyyy\n");
	scanf("%d%d%d", &today_d, &today_m, &today_y);
	scanf("%d%d%d", &birth_d, &birth_m, &birth_y);
	int ch_year = (birth_y % 12) - 1;
	switch (ch_year)
	{
	case 0:
		mon = 1; //cock
		break;
	case 1:
		mon = 2; //dog
		break;
	case 2:
		mon = 3; //pig
		break;
	case 3:
		mon = 4; //rat
		break;
	case 4:
		mon = 5; //bull
		break;
	case 5:
		mon = 6; //tiger
		break;
	case 6:
		mon = 7; //rabbit
		break;
	case 7:
		mon = 8; //dragon
		break;
	case 8:
		mon = 9; //snake
		break;
	case 9:
		mon = 10; //horse
		break;
	case 10:
		mon = 11; //goat
		break;
	case 11:
		mon = 12; //monkey
		break;
	}

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
	printf("Programm was created by Vladimir Chigin") // https://vk.com/just_like248
}