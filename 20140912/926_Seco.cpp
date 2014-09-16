/*************************************************************************************************************************
 * UVa 926
http://uva.onlinejudge.org/external/9/p926.pdf
 *
 * Classification: BFS, DP
 *
 * Author: Diego Seco
 *
 * Date: 15-09-2014
 *
 * Description: DP
*/

#include <iostream>
#include <utility>

using namespace std;

unsigned long long int roadsCount[31][31];
int roadsDisc[31][31];

unsigned long long int dp(int sx, int sy, int ex, int ey) {
	//cout << sx << " " << sy << " " << ex << " " << ey << endl;
	if(sx == ex && sy == ey) {
		roadsCount[ex][ey]=1;
		return 1;
	}
	if(roadsCount[sx][sy]!=-1)
		return roadsCount[sx][sy];
	roadsCount[sx][sy]=0;
	if(sx<ex && roadsDisc[sx][sy]!=-4 && roadsDisc[sx+1][sy]!=-3)
		roadsCount[sx][sy]+=dp(sx+1,sy,ex,ey);
	if(sy<ey && roadsDisc[sx][sy]!=-1 && roadsDisc[sx][sy+1]!=-2)
		roadsCount[sx][sy]+=dp(sx,sy+1,ex,ey);
	return roadsCount[sx][sy];
}

int main() {
	int testCases;
	cin >> testCases;
	while(testCases--) {
		int n,numdisc;		
		cin >> n;
		for(int i=0; i<=n; i++) {
			for(int j=0; j<=n; j++) {
				roadsCount[i][j] = -1;
				roadsDisc[i][j] = 0;
			}
		}
		pair<int,int> start,end;
		cin >> start.first >> start.second >> end.first >> end.second >> numdisc;
		for(int i=0; i<numdisc; i++) {
			int discX,discY;
			char dir;
			cin >> discX >> discY >> dir;
			if(dir=='N') {
				roadsDisc[discX][discY]=-1;
			} else if(dir=='S') {
				roadsDisc[discX][discY]=-2;
			} else if(dir=='W') {
				roadsDisc[discX][discY]=-3;
			} else if(dir=='E') {
				roadsDisc[discX][discY]=-4;
			}
		}

		cout << dp(start.first, start.second, end.first, end.second) << endl;
	}
	return 0;
}
