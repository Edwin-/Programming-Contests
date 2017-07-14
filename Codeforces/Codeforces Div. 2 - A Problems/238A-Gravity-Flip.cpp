/******************************************************************************
 * Autor : Edwin Payrumani Mamani
 * Judge:  Codeforces
 * Problem: A. Gravity Flip || Codeforces Round #238 (Div. 2)
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
      
		int n; int nCubes[101];
		scanf("%d",&n);
		for (int i = 0; i < n; i++){
			scanf("%d",&nCubes[i]);
		}
		sort(nCubes,nCubes+n);
		for (int i = 0; i < n; ++i){
			printf("%d ", nCubes[i]);
		}
		
    return 0;
}