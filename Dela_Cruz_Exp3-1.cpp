#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int arr[10], a, b, n, elem;
	double sum = 0;

	cout << "Enter number of elements (1 to 10):"; cin >> elem; cout << endl;

	if(elem<=10)
	{	
	for(a=0; a<elem; a++)	
		{
		cout<<"Enter your number "<< a+1 <<":";cin >> arr[a];	
		}
	for(a=0; a<elem; a++)	
		{ 
		sum+=arr[a];
		}
	for(a=0; a<elem; a++)	
		{
	for(b=0; b<elem-a-1; b++)
		{
			if(arr[b]>arr[b+1])	
			{
				n=arr[b];
				arr[b]=arr[b+1];
				arr[b+1]=n;
			}
		}
	}
	cout << endl;

	cout << setprecision(4) << showpoint;
	cout << "The largest number is: "<< arr[elem-1]; cout << endl;
	cout << "The smallest number is: "<< arr[0]; cout << endl;
	cout << "The sum is: "<< sum; cout << endl;
	cout << "THe average is: "<< sum/10; 
}

	else
		cout<<"This program doesn't exist!";

	getch();
	return 0;
}