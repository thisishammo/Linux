#include"sorting.h"

void efficient_sort(int arr[], int size)
{
	int64_t i, prev, prev1;
	int64_t count = 0;
	for (i = 1; i < size(arr); i++)
	{
		if (!(arr[i] >= arr[i-1]))
		{
			prev = arr[i];
			prev1 = arr[i-1];
			arr[i-1] = prev1;
			arr[i] = prev;
		}
	} 
}
