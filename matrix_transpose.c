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

	int row, col, temp, arr[N][N], arr1[N][N];

	for(row=0;row<N;row++){
		for(col=0;col<N;col++){
			arr[row][col] = rand()%10 + 1;
		}
	}
	printmat(arr);
	

	for(row=0;row<N;row++){
		for(col=row+1;col<N;col++){
		temp = arr[row][col];
		arr[row][col] = arr[col][row];
		arr[col][row] = temp;
	}
	}
	printmat(arr);
}
