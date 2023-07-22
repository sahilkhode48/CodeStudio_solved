//do the two boud seperately and then merge
#include<bits/stdc++.h>
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	
	int start=0;
	int end=n-1;
	int a=-1;
	
	sort(arr,arr+n);
	while(start<=end){
		int mid=(start+end)/2;
                if (arr[mid] <= x) {
                  a = arr[mid];
                  start = mid + 1;
                } else
                  end = mid - 1;
    }
        

	start=0;
	end=n-1;
	int b=-1;
	while(start<=end){
		int mid=(start+end)/2;
            if (arr[mid] >= x) {
            b = arr[mid];
            end = mid -1;
            }
			else start = mid + 1;
	}	
	pair<int,int>ans({a,b});
	return ans;
	
}
