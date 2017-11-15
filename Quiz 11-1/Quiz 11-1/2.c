#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum) {
	int i;

	*sum = 0.0;
	for (i = 0; i < n; i++) {
		*sum += a[i];
	}
	*avg = *sum / n;
}

void split_time(long total_sec, int *hr, int *min, int *sec) {
	*hr = total_sec / 3600;
	*min = (total_sec % 3600) / 60;
	*sec = total_sec % 60;
}

int *find_largest(int a[], int n) {
	int largest = 0;
	int max = a[largest];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			largest = i;
		}
	}

	return &a[largest];
}

int main(){
	
	return 0;
}