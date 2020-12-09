#include<stdio.h> // подключение заголовочного файла
int main() {
	int i = 0, j, min, buf, N = 7; // объявление переменных
	int arr[] = { -10, 4, 1, 0, 3, 7, 2 }; // объявление массива
	while (i < N - 1) {
		j = i + 1;
		min = i;
		while (j < N) {
			if (arr[j] < arr[min])
				min = j;
			j++;
		}
		buf = arr[i];
		arr[i] = arr[min];
		arr[min] = buf;
		i++;
	}
	for (i = 0; i < N; i++) // цикл для вывода конечного значения
		printf_s(" %d", arr[i]);

}







   


