/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   UVA - Online Judge
 * Problem: 11503 - Virtual Friends
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

int id[200005], sz[200005];
void makeset(int n){
	for( int i = 0; i < n; i++){
		id[i] = i; sz[i] = 1;
	}
}
int find(int i){
	while( i != id[i]){
		id[i] = id[id[i]];
		i = id[i];
	}
	return i;
}
void UnionOf(int p , int q){
	int i = find(p); int j = find(q);
	if(i == j ) return;
	if(sz[i] < sz[j]){
		id[i] = j;
		sz[j] = sz[j] + sz[i];
	}else{
		id[j] = i;
		sz[i] = sz[i] + sz[j];
	}
}
int main(){
	int T,F;
	string A,B;
	scanf("%d",&T);
	map<string,int> Graph;
	while(T--){
		scanf("%d",&F);
		makeset(F*2);
		int c = 0;
		for (int i = 0; i < F; i++){
			cin >> A >> B;
			if( Graph.find(A) == Graph.end()){
				Graph[A] = c; c++;	
			}
			if( Graph.find(B) == Graph.end()){
				Graph[B] = c; c++;
			}	
			int u = Graph[A];
			int v = Graph[B];  
			UnionOf(u,v);
			printf("%d\n", sz[find(u)]);
		}
		Graph.clear();
	}
    return 0;
}