// sas4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

bool isPrime(int a) {
	bool flag = true;
	if (a < 2) {
		return false;
	}
	for (int i = 2; i < std::sqrt(a); i++) {
		if (a % i == 0) {
			flag = false;
		}
	}
	return flag;
}

int main()
{
	int n;
	int a[10000];
	std::cin >> n;
	bool flag = false;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		if (isPrime(a[i])) {
			flag = true;
		}
	}
	if (flag == true) {
		bubbleSort(a, n);
	}
	for (int i = 0; i < n; i++) {
		std::cout << a[i] << " ";
	}

}
