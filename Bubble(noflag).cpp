#include<stdio.h>
void bubble(int arr[], int N);

void main( )
{
	int list[5]={2,1,5,3,4}; // ������ ���Ұ� �ִ� �迭
	int N = 5; // ������ ������ ���� = 5
	bubble(list, N);
	getchar();
}

void bubble(int arr[], int N)
{
	int i, j, n, tmp, step=0, time=0;

	printf("[���� ���� ��]\n"); 
	for(i=0; i<N; i++)
	{		
		printf("%d ", arr[i]);
	}
	printf("\n-----------------------------\n"); 
	printf("[���� ���� ����]"); 

	for(i=N-1; i>0; i--) 
	{
		printf("\n %d �ܰ�::", N-i);
		for(j=0; j<=i; j++) 
		{
			if (arr[j-1]>arr[j])
			{
				tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
			}
			step++; // step = ���ڵ��� �� ȸ�� Ƚ���� ��� 
			printf("\n\t");
			for(n=0; n<N; n++) 
				printf("%3d ", arr[n]);
		}
		time++; // time = �ܰ� ȸ�� Ƚ�� ���
	}

	printf("\n-----------------------------\n"); 
	printf("[ ���� ���� �� ] ");
	for(i=0; i<N; i++)
	{		
		printf("%d ", arr[i]);
	}

	printf("\n\n�� �� �ܰ� Ƚ�� : %d\n", step-time); // step-time : �ܰ� �� �ʱ� ���´� ����
	printf("�� �ܰ� ȸ�� Ƚ�� : %d\n", time);
}
