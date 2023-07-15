#include<bits/stdc++.h>
//
int getLongestZeroSumSubarrayLength(vector<int> &arr){
	//kadane algorithm with hashmap
	unordered_map<int,int>mpp;
	int sum=0;
	int maxi=0;
	for(int i=0;i<arr.size();i++){
		sum+=arr[i];
		if(sum==0){
			maxi=i+1;
		}
		
		else{
			if(mpp.find(sum)!=mpp.end()){
			maxi=max(maxi,i-mpp[sum]);
			
		}
		else mpp[sum]=i;
		}
		
		
	}
	return maxi;
	
}