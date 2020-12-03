#include<stdio.h>// подключение заголовочного файла

int main() {
	int d, i, x, j;// объявление переменных
	int a[] = { 4, 9, 5, 3, 2, 8 };// объявление массива
	int n = sizeof(a) / sizeof(int);// определение количества переменных в массиве 
	d = n / 2;
	while (d > 0) // цикл с предусловием 
	{
		i = d;
	while (i < n) {
		x = a[i]; j = i;
		while (j >= d) {
			if (x < a[j - d]) {
				a[j] = a[j - d]; j = j - d;
			}
			else break;
		}
		a[j] = x; i++;
	}
	d = d / 2;
}
for (i = 0; i < n; i++)// цикл для вывода конечного цикла 
	printf_s(" %d", a[i]);
return 0; }









   


