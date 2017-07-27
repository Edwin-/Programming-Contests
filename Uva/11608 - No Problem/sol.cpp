/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   Uva - Online Judge
 * Problem: 11608 - No Problem	
 * Link :   https://uva.onlinejudge.org/external/116/11608.pdf
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
int main(){
	int s; int problems[13]; int ready[13];
	int cases = 1;
	while( scanf("%d",&s) > 0){

		if( s < 0 ) break;

		for( int i = 0; i < 12 ; i++){
			scanf("%d",&problems[i]);
		}
		for( int i = 0; i < 12 ; i++){
			scanf("%d", &ready[i]);
		}
		int sum = s;
		printf("Case %d:\n",cases);

		for (int i = 0; i < 12; i++){
			if( ready[i] > sum) {
				printf("No problem. :(\n");
			}else{
				printf("No problem! :D\n");			
				sum = sum - ready[i];
			}
			sum = sum + problems[i];
		}
		cases++;
	}
   	return 0;
}