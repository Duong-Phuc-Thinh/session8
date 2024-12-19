#include <stdio.h>

int main() {
	int arr[3][3]= {{1,2,3},{4,5,6}, {7,8,9}};
	int max=arr[0][0];

	for(int n = 0; n<3; n++) {
		for(int h = 0; h<3; h++) {
		 if (arr[n][h] > max) {
                max = arr[n][h];
			}
		}
	}
	printf("phan tu lon nhat cua mang la %d", max);
	return 0;
}
