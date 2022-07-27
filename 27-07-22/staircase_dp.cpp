#include <bits/stdc++.h>
using namespace std;

int frog_jump(int n){

	vector<int> dp(n+1,-1);
	dp[0]=1;
	int left =0; int right =0;
	for(int i =1;i<=n;++i){
		int left = dp[i-1];
		if(i>1){
			right = dp[i-2];
		}
		dp[i] = right+left;
	}
	return dp[n];
}

int main(){
	// vector<int> arr = {30,10,60,10,60,50};
	// vector<int> dp(5,-1);
	cout<<frog_jump(5);
}