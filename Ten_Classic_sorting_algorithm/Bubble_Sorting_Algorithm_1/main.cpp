#include<iostream>
#include<vector>
using namespace std;

/*
 * bubble sorting algorithm
 */
vector<int> bubbleSort(vector<int> &unsorted_arr)
{
	int len = unsorted_arr.size();
	for(int i = 0;i<len-1;i++)
	{
		for(int j = 0;j<len-1-i;j++)
		{
			if(unsorted_arr[j]>unsorted_arr[j+1])
			{
				int tmp = unsorted_arr[j];
				unsorted_arr[j] = unsorted_arr[j+1];
				unsorted_arr[j+1] = tmp;
			}
		}
	}
	return unsorted_arr;
}



int main()
{
	int arr[10] = {7,6,4,0,1,2,9,8,3,5};
	vector<int> input_arr(arr,arr+10);
	bubbleSort(input_arr);
	for(vector<int>::iterator it=input_arr.begin();it!=input_arr.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}
