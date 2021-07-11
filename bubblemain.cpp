#include <iostream>
using namespace std;
//calling input/output functions
void outBubble(int[], int);
void inputBubble(int[], int);
void bubble(int arr[], int n);
int main() 
{
	cout<<"Input the array`s size"<<endl;
	int n;
	cin>>n;
	int *arr= new int[n];
	cout<<"Input the array`s numbers"<<endl;
	inputBubble(arr,n);
	bubble(arr, n);
	outBubble(arr,n);
	return 0;

}

