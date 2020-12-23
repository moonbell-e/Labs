#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c; // Объявление переменных
	printf_s("Введите значения a и b: "); // Вывод задачи
	scanf_s("%d %d", &a, &b); // Ввод данных с клавиатуры
	c = a + b; // Операция прибавления
	printf_s("Сумма a и b равна: ");
	printf_s("%d + %d = %d", a, b, a + b); // Вывод значения операции прибавления

}








   


