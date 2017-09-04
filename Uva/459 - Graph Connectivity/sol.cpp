/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   UVA - Online Judge
 * Problem: 459 - Graph Connectivity
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

int id[31]; int sz[31];
int numComponents;

void makeset(int n){
	numComponents = n;
	for(int i = 0 ; i < n ; i++){
		id[i] = i;
		sz[i] = 1; 
	}
}
int find(int i){
	while( i != id[i]){
		id[i] = id[id[i]]; //Path Compression, // Follow links to find a root.
		i = id[i];
	}
	return i;
}
void Union(int p , int q){ //Weighted quick-union
	int i = find(p); int j = find(q);
	
	if (i == j) return;

	if(sz[i] < sz[j]){
		id[i] = j;
		sz[j] = sz[j] + sz[i];
	}else{
		id[j] = i;
		sz[i] = sz[i] + sz[j];
	}
	numComponents--;
}

map<char , int> Graph;

void initGraph(){
	int id = 0;
	for (char i = 'A'; i <='Z'; i++){
		Graph[i] = id;	
		id++;
	}
}

int main(){
	int x,y,n,t;
    char m,line[64],a,b;
    scanf("%d", &t);	
    initGraph();
    while (t--) {
        scanf("%s", &m);
        n = Graph[m];
        makeset(n+1);
        gets(line);
        while (gets(line) && line[0]) {
            sscanf(line, "%c%c", &a, &b);
            x = Graph[a];
            y = Graph[b];
            Union(x,y);
        }
        printf("%d\n", numComponents);
        if (t)
            printf("\n");
    }
    return 0;
}

