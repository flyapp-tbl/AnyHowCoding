#include<iostream>
#include<vector>
using namespace std;

/*
 * select sorting algorithm
 */
vector<int> selectSort(vector<int> &unsorted_arr)
{
	int len = unsorted_arr.size();
	int min_index = 0;
	for(int i = 0;i<len-1;i++)
	{
		min_index = i;
		for(int j = i+1;j<len;j++)
		{
			if(unsorted_arr[j]<unsorted_arr[min_index])
				min_index = j;
		}
		int tmp = unsorted_arr[min_index];
		unsorted_arr[min_index] = unsorted_arr[i];
		unsorted_arr[i] = tmp;
	}

	return unsorted_arr;
}



int main()
{
	int arr[10] = {7,6,4,0,1,2,9,8,3,5};
	vector<int> input_arr(arr,arr+10);
	selectSort(input_arr);
	for(vector<int>::iterator it=input_arr.begin();it!=input_arr.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}
