/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   TJU - Online Judge
 * Problem: 3499.   Network
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
int id[10000+1], sz[10000+1];
void makeset(int n){
	for(int i = 0; i < n ; i++){
		id[i] = i;
		sz[i] = 1;
	}
}
int find(int i){
	while(i != id[i]){
		id[i] = id[id[i]];
		i = id[i];
	}
	return i;
}
void Union(int p , int q){
	int i = find(p); int j = find(q);
	if( i == j) return;

	if(sz[i] < sz[j]){
		id[i] = j;
		sz[j] = sz[j] + sz[i];
	}else{
		id[j] = i;
		sz[i] = sz[i] + sz[j];
	}
}
int main(){
	int N,M,K;  int a,b; int x,y;
	int lines = 2+M-1;
	while(scanf("%d %d %d",&N,&M,&K)==3){
		makeset(N);
		for(int i = 0; i < M; i++){
			scanf("%d%d", &a,&b);
			Union(a,b);
		}
		for(int i = 0; i < K; i++){
			scanf("%d%d",&x,&y);
			if(find(x) == find(y)) printf("YES\n");
			else printf("NO\n");
		}   	
	}
	return 0;
}