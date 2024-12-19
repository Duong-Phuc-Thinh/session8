#include <stdio.h>

int main() {
	int arr[3][3]= {{1,3,1},{2,4,6}, {6,8,12}}, 
	sum=0;
	
	printf("cac gia tri ma tran:\n");
	for(int n = 0; n<3; n++) {
		for(int h = 0; h<3; h++) {
		  if(n == 0 || h == 0 || n == 3 - 1 || h == 3 - 1){
                sum += arr[n][h];
                printf("%d ", arr[n][h]);
			}
		}	
	}
	printf("\nTong cac gia tri bien cua ma tran la: %d", sum);

	return 0;
}
