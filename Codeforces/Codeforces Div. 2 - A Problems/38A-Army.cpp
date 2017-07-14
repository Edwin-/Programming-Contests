/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   Codeforces
 * Problem: A. Army || Codeforces Beta Round #38 
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
       	//ios_base::sync_with_stdio(0);
       	//cin.tie(0);
		int n, a , b;
		int d[101];

		scanf("%d",&n);
		for (int i = 0; i < (n - 1); i++){	
			scanf("%d",&d[i]);
		}
		scanf("%d%d",&a,&b);

		int sum = 0;

		for(int i = 0; i < (n - 1); i++){
			
			if( (i >= (a-1) ) && (i < (b - 1)) ) sum = sum + d[i];	

		}

		printf("%d\n",sum);
        return 0;
}







