#include <stdio.h>
void Swap_Array(int *arr1, int *arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		int temp =
			arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
int main()
{
	int size;
	printf("Enter the size of arrays: ");
	scanf("%d", &size);
	int arr1[size], arr2[size];
	printf("Enter elements of first array: ");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("Enter elements of second array: ");
	for (int i = 0; i <
					size;
		 i++)
	{
		scanf("%d", &arr2[i]);
	}
	printf("\nOriginal arrays:\n");
	printf("Array 1: ");
	for (int i = 0; i <
					size;
		 i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\nArray 2: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ",
			   arr2[i]);
	}
	Swap_Array(arr1, arr2, size);
	printf("\n\nArrays after swapping:\n");
	printf("Array 1: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\nArray 2: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}