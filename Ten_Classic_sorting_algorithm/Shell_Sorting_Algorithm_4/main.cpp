#include<iostream>
#include<vector>
using namespace std;

/*
 * shell sorting algorithm
 */
vector<int> shellSort(vector<int> &unsorted_arr)
{
	int len = unsorted_arr.size();
	for(int gap=(len/2);gap>0;gap=(gap/2))
	{
		for(int i = gap;i<len;i++)
		{
			int j = i;
			int current_data = unsorted_arr[i];
			while(j-gap>=0 && unsorted_arr[j-gap]>current_data)
			{
				unsorted_arr[j] = unsorted_arr[j-gap];
				j = j-gap;
			}
			unsorted_arr[j]=current_data;
		}
	}
	return unsorted_arr;
}



int main()
{
	int arr[10] = {7,6,4,0,1,2,9,8,3,5};
	vector<int> input_arr(arr,arr+10);
	shellSort(input_arr);
	for(vector<int>::iterator it=input_arr.begin();it!=input_arr.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}
