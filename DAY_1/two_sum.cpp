#include<iostream>
using namespace std;
void print_pair_with_target_sum(int *array, int size,int target)
{
	//iterate array in double nested for loop
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(array[i]+ array[j]==target)
			cout<<"["<<i<<","<<j<<"]"<<endl;
		
		}
	}
	//print of every combination of the value
}
int main()
{
	//Define array and initialize with value
	int array[]={2,7,11,15};
	int target=9;
	//store the size of an array in variable
	int size = sizeof(array)/sizeof(array[0]);
	print_pair_with_target_sum(array,size,target);
}
