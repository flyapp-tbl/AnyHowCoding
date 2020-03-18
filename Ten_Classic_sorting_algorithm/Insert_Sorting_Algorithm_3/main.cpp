#include<iostream>
#include<vector>
using namespace std;

/*
 * insert sorting algorithm
 */
vector<int> insertSort(vector<int> &unsorted_arr)
{
	int len = unsorted_arr.size();
	int pre_index = 0;
	int current_data = 0;
	for(int i = 1;i<len;i++)
	{
		pre_index = i-1;
		current_data = unsorted_arr[i];
		while(pre_index>=0 && current_data<unsorted_arr[pre_index])
		{
			unsorted_arr[pre_index+1] = unsorted_arr[pre_index];
			pre_index--;
		}
		unsorted_arr[pre_index+1] = current_data;
	}
	return unsorted_arr;
	
}



int main()
{
	int arr[10] = {7,6,4,0,1,2,9,8,3,5};
	vector<int> input_arr(arr,arr+10);
	insertSort(input_arr);
	for(vector<int>::iterator it=input_arr.begin();it!=input_arr.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}
