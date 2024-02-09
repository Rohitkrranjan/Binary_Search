#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int n,int arr[] ,int key)
{
	int s=0;
	int e=n-1;
	int mid = s+(e-s)/2;
	
	while(s<=e)
	{
		if(arr[mid] == key)
		 return mid;
		else if(key > mid)
		 s=mid+1;
		else
		 e=mid-1;
		mid = s + (e-s)/2;
	}
	return -1;
}



int main(){
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	int target;
	cin>>target;
	
   cout<<"Element present at the index = "<< binarySearch(n,arr,target);
    
	
}
