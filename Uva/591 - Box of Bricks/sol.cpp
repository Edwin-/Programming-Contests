/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   Uva - Online Judge
 * Problem: 591 - Box of Bricks
 * Link :   https://uva.onlinejudge.org/external/5/591.pdf
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
		
		int n; int height;   // do not forget it.  move one by one in each stack
		int bricks[51];
		int sets = 0; int media = 0;
		while( cin >> n){
			if( n == 0) break;
			int sum = 0;
			for(int i = 0; i < n ; i ++){
				scanf("%d",&bricks[i]);
				sum = sum + bricks[i];
			}
			media = sum/n; int aux = 0; 
			
			for( int i = 0; i < n  ; i++){
				 if( bricks[i] > media){
				 	aux = aux + (bricks[i] - media);
				 }	
			}
			sets++;
			printf("Set #%d\n", sets);
            printf("The minimum number of moves is %d.\n\n", aux);
			//printf("%d\n", c);
		}

        return 0;
}







