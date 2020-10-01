#include<stdio.h>
#include<stdlib.h>
#define N 3

void printmat(int arr[N][N]){
	int row, col;
	for(row=0;row<N;row++){
		for(col=0;col<N;col++){
			printf("%4d", arr[row][col]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(){

	int row, col, k, arr2[N][N]={0}, arr[N][N], arr1[N][N];

	for(row=0;row<N;row++){
		for(col=0;col<N;col++){
			arr[row][col] = rand()%10 + 1;
			arr1[row][col] = rand()%10 +1;
		}
	}

	printmat(arr);
	printmat(arr1);
	printmat(arr2);

	for(row=0;row<N;row++){
		for(col=0;col<N;col++){
			for(k=0;k<N;k++){
				arr2[row][col] += arr[row][k]*arr1[k][col];
			}
		}
	}
	printmat(arr2);
}
