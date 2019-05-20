#include <iostream>
#include <iomanip>
#include <conio.h>
 
using namespace std;

int main()
{
	int a, b, c, i;
	char arr[99];

	cout<<"Enter array size (1 to 99): ";cin>>i;
		
	if(i<=99)	
	{
		for(a=0; a<=i-1; a++)	
		{
			cout<<"Enter the number of elements "<<a+1<<": "; cin>>arr[a]; cout<<endl;
		}

		for(a=0; a<=i; a++)
		{
			for(b=0; b<i-a-1; b++)
			{
			if(arr[b] > arr[b+1])	
				{
				c = arr[b];
				arr[b] = arr[b+1];
				arr[b+1] = c;
				}
			}
		}
	cout<<"Now the reverse order of the array: ";

	for(a=0; a<=i-1; a++)	
		{
		cout<<arr[a]<<"  ";
		} 
	cout<<endl;
	}

	else
		cout<<"This program doesn't exist! ";

	getch();
	return 0;
}