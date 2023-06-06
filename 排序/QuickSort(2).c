#define _CRT_SECURE_NO_WARNINGS
int PartSort1(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	int left = begin, right = end;
	int keyi = left;
	while (left < right)
	{
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}
		while (left < right && a[left] <= a[keyi])
		{
			left++;
		}
		Swap(&a[left], &a[right]);
	}
	left = keyi;
	return keyi;
}
int PartSort2(int* a, int begin, int end)
{
	int key = a[begin];
	int piti = begin;
	while (begin < end)
	{
		while (begin<end && a[end]>=key)
		{
			end--;
		}
		a[piti] = a[end];
		piti = end;
		while (begin < end && a[begin] <= key)
		{
			begin++;
		}
		a[piti] = a[begin];
		piti = begin;
	}
	a[piti] = begin;
	piti = begin;
	return piti;
}
