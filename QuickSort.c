#define _CRT_SECURE_NO_WARNINGS 
void QuickSort(int* a, int begin,int end)
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
	Swap(&a[keyi], &a[left]);
	 keyi=left;
	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}