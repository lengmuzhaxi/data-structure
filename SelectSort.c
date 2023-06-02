#define _CRT_SECURE_NO_WARNINGS
void Swap(int *p1,int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	int maxi = begin, mini = end;
	while (begin < end)
	{
		for (int i = begin; i < end; i++)
		{
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
			if (a[i] < a[mini])
			{
				maxi = i;
			}
		}
		if (begin == maxi)
		{
			maxi = mini;
		}
		Swap(&a[end], &a[maxi]);
		end--;
		begin++;
	}
}