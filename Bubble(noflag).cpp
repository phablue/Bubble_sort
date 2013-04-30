#include<stdio.h>
void bubble(int arr[], int N);

void main( )
{
	int list[5]={2,1,5,3,4}; // 정렬할 원소가 있는 배열
	int N = 5; // 정렬할 원소의 개수 = 5
	bubble(list, N);
	getchar();
}

void bubble(int arr[], int N)
{
	int i, j, n, tmp, step=0, time=0;

	printf("[버블 정렬 전]\n"); 
	for(i=0; i<N; i++)
	{		
		printf("%d ", arr[i]);
	}
	printf("\n-----------------------------\n"); 
	printf("[버블 정렬 진행]"); 

	for(i=N-1; i>0; i--) 
	{
		printf("\n %d 단계::", N-i);
		for(j=0; j<=i; j++) 
		{
			if (arr[j-1]>arr[j])
			{
				tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
			}
			step++; // step = 레코드의 비교 회전 횟수를 계산 
			printf("\n\t");
			for(n=0; n<N; n++) 
				printf("%3d ", arr[n]);
		}
		time++; // time = 단계 회전 횟수 계산
	}

	printf("\n-----------------------------\n"); 
	printf("[ 버블 정렬 후 ] ");
	for(i=0; i<N; i++)
	{		
		printf("%d ", arr[i]);
	}

	printf("\n\n총 비교 단계 횟수 : %d\n", step-time); // step-time : 단계 별 초기 상태는 제외
	printf("총 단계 회전 횟수 : %d\n", time);
}
