#include <bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for(int i=a; i< b; i++)
#define D(a) cout << a << "\n"

int main(){

	int N, aux, total, turno, aux2;
	priority_queue <int> pq;
	cin >> N;

	while (N!=0){
		if (N==1) {
			cin >> aux;
			cout << 0 << endl;
		}
		else{
			REP(i,0,N){
				cin >> aux;
				pq.push(aux*-1);
			}
			aux = pq.top()*-1;
			pq.pop();
			total = aux + pq.top()*-1;
			aux2 = pq.top();
			pq.pop();
			turno = total;
			REP(i,2,N){
				if (aux2 > pq.top()){
					turno += pq.top()*-1;
					pq.pop();
					total += turno;
				}
				else{
					pq.pop();
				}
			}
			cout << total << endl;
		}
		cin >> N;
	}

}