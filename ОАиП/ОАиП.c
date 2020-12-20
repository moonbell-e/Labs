#include <stdio.h>
void qsort(int* arr, int b, int e) {
	if (b < e) {
		int buf, l = b, r = e, piv = arr[(b + e) / 2];
		do {
			while (arr[l] < piv)
				l++;
			while (arr[r] > piv)
				r--;
			if (l <= r) {
				int t = arr[l];
				arr[l] = arr[r];
				arr[r] = t;
				l++;
				r--;
			}
		} while (l <= r);
		qsort(arr, b, r);
		qsort(arr, l, e);
	}
}
int main() {
	int arr[] = { 1, 2, 4, 78, 0, -45, 6 };
	int N = sizeof(arr) / sizeof(int);
	int i;
	qsort(arr, 0, N - 1);
	for (i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}







   


