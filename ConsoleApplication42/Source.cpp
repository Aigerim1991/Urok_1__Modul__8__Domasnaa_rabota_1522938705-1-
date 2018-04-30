#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include "Header.h"

using namespace std;
int N;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do
	{
		printf("Введите номер задания: ");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			/*1.	Составить программу, которая:
			a.запрашивает имя человека и повторяет его на экране;
			b.запрашивает имя человека и повторяет его на экране с приветствием.*/
			cin.get();
			char name[20];
			printf("Ваше имя? ");
			gets_s(name);
			printf("a) Повтор: %s\n", name);
			printf("b) Приветствую, %s\n", name);
		}
		break;
		case 2:
		{
			//2.	Составить программу, которая запрашивает название футбольной команды и повторяет его на экране со словами "— это чемпион!".
			cin.get();
			char team[30];
			puts("Название команды? ");
			gets_s(team);
			printf("%s - это чемпион!\n", team);
		}
		break;
		case 3:
		{
			//3.	Составить программу, которая запрашивает отдельно имя и отдельно фамилию, а затем выводит их как одну символьную строку.
			cin.get();
			char firstname[30];
			char secondname[30];
			char *name = NULL;
			name = (char*)calloc(strlen(firstname) + strlen(secondname), sizeof(char));
			printf("Имя: ");
			gets_s(firstname);
			printf("Фамилия: ");
			gets_s(secondname);
			strcat(name, firstname);
			strcat(name, secondname);
			printf("%s\n", name);
			free(name);
		}
		break;
		case 4:
		{
			//4.	Составить программу, которая запрашивает название государства и его столицы, а затем выводит сообщение: 
			//"Столица государства ... — город ..." (на месте многоточий должны быть выведены соответствующие значения).
			cin.get();
			char state[50];
			char BigCityLife[30];
			printf("Государство: ");
			gets_s(state);
			printf("Столица: ");
			gets_s(BigCityLife);
			/*char *state1 = NULL;
			state1 = (char*)calloc(strlen(state) , sizeof(char));
			strcat(state1, state);
			char *city1 = NULL;
			city1 = (char*)calloc(strlen(city), sizeof(char));
			strcat(city1, city);*/
			printf("Столица государства %s - город %s \n", state, BigCityLife);
		}
		break;
		case 5:
		{
			//5.	Дано название футбольного клуба. Определить количество символов в нем.
			cin.get();
			char club[30];
			printf("Название клуба? ");
			gets_s(club);
			printf("В названии клуба - %d символов.\n", strlen(club));
		}
		break;
		case 6:
		{
			//6.	Дано название города. Определить, четно или нет количество символов в нем
			cin.get();
			char BigCityLife[60];
			printf("Название города? ");
			gets_s(BigCityLife);
			if (strlen(BigCityLife) % 2 == 0)
				printf("В названии города %s четное кол-во букв.\n", BigCityLife);
			else
				printf("В названии города %s нечетное кол-во букв.\n", BigCityLife);
		}
		break;
		case 7:
		{
			//7.	Даны две фамилии. Определить, какая из них длиннее.
			cin.get();
			char secondName1[30], secondName2[30];
			printf("Первая фамилия - ");
			gets_s(secondName1);
			printf("Вторая фамилия - ");
			gets_s(secondName2);
			if (strlen(secondName1) > strlen(secondName2))
				printf("Фамилия %s длиннее фамилии %s\n", secondName1, secondName2);
			else if (strlen(secondName1) == strlen(secondName2))
				printf("Фамилия %s и фамилия %s равны по длине символов\n", secondName1, secondName2);
			else
				printf("Фамилия %s длиннее фамилии %s\n", secondName2, secondName1);
		}
		break;
		case 8:
		{
			//8.	Даны названия трех городов. Вывести на экран самое длинное и самое короткое название.
			cin.get();
			char BigCityLife1[60], BigCityLife2[60], BigCityLife3[60];
			printf("Город 1: ");
			gets_s(BigCityLife1);
			printf("Город 2: ");
			gets_s(BigCityLife2);
			printf("Город 3: ");
			gets_s(BigCityLife3);
			MaxMinBigCityLife(BigCityLife1, BigCityLife2, BigCityLife3);
		}
		break;
		case 9:
		{
			//9.	Дано слово.Вывести на экран его третий символ
			cin.get();
			char word[30];
			printf("Введите слово: ");
			gets_s(word);
			printf("Третий символ слова %s - \"%c\"\n", word, *(word + 2));
		}
		break;
		case 10:
		{
			//10.	Введите массив символов из 12 элементов. Замените каждый символ- цифру на символ '!'
			cin.get();
			char word[12];
			printf("Введите слово: ");
			gets_s(word);
			if (strlen(word) > 12)
			{
				printf("В слове больше 12 символов.\n");
				break;
			}
			else
				for (int i = 0; i < 12; i++)
				{
					if ((*(word + i) >= '0') && (*(word + i) <= '9'))
						*(word + i) = '!';
				}
			printf("Измененное слово: %s\n", word);
		}
		break;
		case 11:
		{
			//11.	Дана матрица символов размером 2×6. Сколько раз среди данных символов встречаются символы +, -, *.
			char *mass = NULL;
			int kol = 0;
			mass = (char*)calloc(2 * 6, sizeof(char));
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					*(mass + i * 6 + j) = 33 + rand() % 222;
					if (*(mass + i * 6 + j) == '+' || *(mass + i * 6 + j) == '-' || *(mass + i * 6 + j) == '*')
						kol++;
				}
			}
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					printf("%c ", *(mass + i * 6 + j));
				}
				printf("\n");
			}
			printf("Заданные символы встречаются %d раз.\n", kol);
			free(mass);
		}
		break;
		case 12:
		{
		//12.	Введите массив символов из 15 элементов. Подсчитать количество гласных русских букв.
			char *mass = NULL;
			int temp = 0;
			mass = (char*)calloc(10, sizeof(char));
			for (int i = 0; i < 10; i++)
			{
				*(mass + i) = 33 + rand() % 222;
				if (*(mass + i) == 'а' || *(mass + i) == 'я' || *(mass + i) == 'о' || *(mass + i) == 'ё' || *(mass + i) == 'у' ||
					*(mass + i) == 'ю' || *(mass + i) == 'ы' || *(mass + i) == 'и' || *(mass + i) == 'э' || *(mass + i) == 'е' ||
					*(mass + i) == 'А' || *(mass + i) == 'Я' || *(mass + i) == 'О' || *(mass + i) == 'Ё' || *(mass + i) == 'У' ||
					*(mass + i) == 'Ю' || *(mass + i) == 'Ы' || *(mass + i) == 'И' || *(mass + i) == 'Э' || *(mass + i) == 'Е')
					temp++;
			}
			for (int i = 0; i < 10; i++)
			{
				printf("%c ", *(mass + i));
			}
			printf("\nГласные русские буквы встречаются %d раз.\n", temp);
			free(mass);
		}
		break;
		default:
			break;
		}

	} while (N > 0);







}