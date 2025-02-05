#include<bits/stdc++.h>
using namespace std;

int main(){
	char arr[6] = {'one','b','c','-1','1','3'};
	int size = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0;i<size;i++){
		for(int j = i + 1;j<size;j++){
		    if(arr[i] == arr[j]){
		        cout<<"this array contains duplicates";
		        break;
		    }
		}
		
	}
	cout<<"Array has no duplicates";
	
	return 0;
}