#include <iostream>
using namespace std;
void swap(int *xp, int *yp)
{
	//elements swaping function
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubble(int arr[], int n) //sorting function
{
int i, j; 
for (i=0; i<n-1; i++)
	{
		for (j=0; j<n-i-1; j++)
			if (arr[j]>arr[j+1])
			swap(&arr[j], &arr[j+1]);	
	}
}

