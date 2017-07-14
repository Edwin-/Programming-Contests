/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   Codeforces
 * Problem: A. Cinema Line || Codeforces Round #202 (Div. 2)
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

		int n, money; int flag = 1;	
		int cost = 25; int cost_25 = 25; int cost_50 = 50; int cost_100= 100;	
		map<int, int> residue;

		scanf("%d",&n);

		for (int i = 0; i < n; i++){

			scanf("%d",&money);
			
			if(money == cost_25) residue[cost_25]++;		
			if(money == cost_50){
					residue[cost_50]++;
					residue[cost_25]--;
			}else if(money == cost_100){			
				if(residue[cost_50] > 0){
					residue[cost_100]++; // not necessary
					residue[cost_25]--;
					residue[cost_50]--;
				}else{
					residue[cost_25]--;
					residue[cost_25]--;
					residue[cost_25]--;
				}				
			}

		if(residue[cost_25] < 0 || residue[cost_50] < 0 ) {
			flag = 0;
		}
	}
		if(flag == 1)printf("%s\n", "YES");
		else printf("%s\n","NO");
        
        return 0;
}