#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int i,int key){
	if(i==n){
		return -1;
	}

	if(arr[i] == key){
		return i;
	}

return firstOcc(arr,n,i+1,key);
}

int lastOcc(int arr[],int n,int i,int key){
	if(i==n){
		return -1;
	}

	int restArr = lastOcc(arr,n,i+1,key);
	if(restArr != -1){
		return restArr;
	}

	if(arr[i] == key){
		return i;
	}

	return -1;
}




int main(){
#ifndef ONLINE_JUDGE
// for getting input from input.txt
freopen("input1.txt", "r", stdin);
// for writing output from output.txt
freopen("output1.txt", "w", stdout);
#endif
	
	int arr[] = {4,2,1,2,5,2,7};
	cout<<firstOcc(arr,7,0,2)<<" "<<lastOcc(arr,7,0,2);
	return 0;
	
}