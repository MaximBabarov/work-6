#define _CRT_SECURE_NO_WARNINGS

#define _USE_MATH_DEFINES 

#include <locale.h>

#include <stdio.h>



int work1_1(int yeas);
int work1_2(int yeas);
int work2(int X);
int work3(int N, int C);

int main()

{
	setlocale(LC_ALL, "RUS");
	int yeas;
	int X;
	int N, C;
	printf("задание 1\n");
	printf("введите год - ");
	scanf("%d", &yeas);
	printf("\n");
	if (work1_1(yeas) == 1) {
		printf("год %d является високосным\n", yeas);
	}
	else {
		printf("год %d является не високосным\n", yeas);
	}
	printf("второй подпункт\n");
	if (work1_2(yeas)) {
		printf("год %d является високосным\n", yeas);
	}
	else {
		printf("год %d является не високосным\n", yeas);
	}
	printf("задание 2\n");
	printf("введите значение X - ");
	scanf("%d", &X);
	printf("\n");
	work2(X);
	printf("\n");
	printf("задание 3\n");
	printf("введите число до 1000 - ");
	scanf("%d", &N);
	printf("\n");
	printf("Выберите, какую цифру хотите получить(1 - первую цифру,0 - последнюю) - ");
	scanf("%d", &C);
	printf("\n");
	if (work3(N, C) != 10) {
		printf("Символ - %d", work3(N, C));
	}
	else {
		printf("Некорректный ввод");
	}
	return 0;
}

int work1_1(yeas)
{
	if (yeas % 4 == 0) {
		return 1;
	}
	else {
		return 0;
	}
	
}
int work1_2(yeas)
{
	if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0)){
		return 1;
	}
	else {
		return 0;
	}

}
int work2(int X)
{
	printf("результат F(x) = %.3f", (X>=3) ? (float)(-1 * pow(X, 2) + 3 * X + 9) : (float)(X / pow(X, 3) - 6));
}
int work3(int N, int C) 
{
	if (C == 1) {
		return N / 100;
	}
	else if (C == 0) {
		return N % 10;
	}
	else {
		return 10;
	}
}