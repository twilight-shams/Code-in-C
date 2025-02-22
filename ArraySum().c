#include <stdio.h>
void ArraySum(int *arr1, int *arr2, int *arr3, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr3[i] =
			arr1[i] + arr2[i];
	}
}
int main()
{
	int size;
	printf("Enter the size of arrays: ");
	scanf("%d", &size);
	int
		arr1[size],
		arr2[size], arr3[size];
	printf("Enter elements of first array: ");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("Enter elements of second array: ");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr2[i]);
	}
	ArraySum(arr1, arr2, arr3, size);
	printf("Array (Sum): ");
	for (int i = 0; i <
					size;
		 i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");
}