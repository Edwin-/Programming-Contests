/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   Uva - Online Judge
 * Problem: 111093 Just Finish it up
 * Link :   https://uva.onlinejudge.org/external/110/11093.pdf
 *****************************************************************************/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <queue>
#include <climits>

using namespace std;

#define ALL(x)      x.begin(),x.end()
#define SORT(c)     sort(ALL(c))
#define CL(a,b)     memset(a,b,sizeof(a))

#define foreach(c,it) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();it++)
#define FX(x) fixed << setprecision(x)
#define INF (1<<30)

typedef long long   LL;
typedef unsigned long long uLL;

const double EPS = 1e-10; // 1e-9;
const double PI  = acos(-1.0);

int cmp(double x, double y = 0, double tol = EPS) {
    return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}

int t,n;
int solve( int p[100005] , int q[100005]){
	int index = -1; int gasoline = 0;
	for (int i = 0 ; i < n ; i++){
		gasoline = (p[i] - q[i]);
		if(gasoline < 0){
			gasoline = 0;
			 continue;
		}else{
			gasoline = 0;
			int j = i; int cnt = 0; int nn = n;
			while(  j < nn && cnt < n){
				gasoline = gasoline + (p[j] - q[j]);
				if(gasoline >=0){
					j++; cnt++;
				}else{
					break;
				}
				if (j == nn ){
					nn = n - cnt;
					j = 0;
				}
			}
			if( cnt == n){
				index = i;
				return index ;
			}
		}
	}
	return index;
}
int main(){
		
		scanf("%d",&t);
		int p[100005] , q[100005];
		int cases = 1; 
		while(t--){
			int sump  = 0; int sumq = 0;
			scanf("%d", &n);
			for (int i = 0; i < n; i++){
				scanf("%d",&p[i]);
				sump = sump + p[i];
			}
			for (int i = 0; i < n; i++){
				scanf("%d",&q[i]);
				sumq = sumq + q[i];
			}
			printf("Case %d: ",cases);
			if(sump < sumq){ 
				printf("Not possible\n");
			}else{
				int ans = solve(p,q);
				if( ans >=0){
					printf("Possible from station %d\n", ans+1);
				}else{
					printf("Not possible\n");
				}
			}
			cases++;			
		}
    return 0;
}