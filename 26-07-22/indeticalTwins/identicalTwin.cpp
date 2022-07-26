#include <bits/stdc++.h>
using namespace std;

int getIdenticalTwinsCount(vector<int> &arr) {
    // add your logic her0e
	map<int,int> m;
	vector<int> v1;
	int cnt=0;

	for(auto x : arr){
		if(m.find(x)!=m.end()){

			// cout<<x<<" "<<m[x]<<endl;
			cnt+=m[x];
		}
			m[x]++;

	}

	return cnt;
	// sort(v1.begin,v1.end());
	// return v1[v1.size()-1];
}

int main(){
	vector<int> v1  ={6 ,1 ,2 ,2 ,3 ,2 ,1};
	cout<<getIdenticalTwinsCount(v1);
}