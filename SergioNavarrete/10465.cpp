#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
 //UvA 10465 - Homer Simpson
using namespace std;

int memo[10001];

int dp(int t,int a,int b){

for (int i = 1; i <= t;i++){

	if(i < a && i < b) continue;
	if (i >= a && i < b && memo[i - a] != -1) memo[i] = 1 + memo[i - a];
	else if (memo[i-a] != -1 || i >= b && memo[i-b] != -1) memo[i] = max(memo[i - a], memo[i - b]) + 1;
}
	for(int i=0;i<=t;i++){
		printf("%d ",memo[i]);
	}printf("\n");
return memo[t];

}

int main(){
	
	int t,ba,bb;
	memset(memo,-1,sizeof(memo));
	cin >> ba;
	cin >> bb;
	cin >> t;
	memo[0] = 0;
	if(bb< ba) swap(ba,bb);
	int res = dp(t,ba,bb);
	
	if(res == -1) {
		res =  t;
		while(memo[res]== -1){
			res--;
		}
		printf("%d %d\n", memo[res], t - res);
	}

	else
		printf("%d\n", res);


	return 0;

}
