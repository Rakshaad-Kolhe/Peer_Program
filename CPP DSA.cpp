#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++){
	    cin >> nums[i];
	}
	int count = 0;
	for(int i = 0; i < n - 1; i++){
	    if(nums[i] > nums[i + 1]){
	        count++;
	    }
	}
	if(nums[n-1] > nums[0]){
	    count++;
	}
	if(count <= 1)
	    cout << "True";
	 else 
	    cout << "False";
	

}
