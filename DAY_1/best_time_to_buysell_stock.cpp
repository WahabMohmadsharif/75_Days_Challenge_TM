#include<iostream>
using namespace std;

void print_best_profit(int *array, int size)
{
	//iterate array in double nested for loop
	
	int i,j,large=0;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(array[j] - array[i] > large)
			large=array[j]-array[i];	
		}
	}
	cout<<large<<endl;
	//print of every combination of the value
}
int main()
{
	//Define array and initialize with value
	int array[]={7,6,4,3,1};
	//store the size of an array in variable
	int size = sizeof(array)/sizeof(array[0]);
	print_best_profit(array,size);
}
