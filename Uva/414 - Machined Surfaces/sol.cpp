/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   Uva - Online Judge
 * Problem: 414 - Machined Surfaces
 * Link :   https://uva.onlinejudge.org/external/4/414.pdf
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
		int N; string line; 
		vector <string> cube;
		while(cin >> N){

			if(N == 0) break;
	
			getchar() ;

			for(int i = 0; i < N ; i++){
				getline(cin,line);
				cube.push_back(line);
			}
			int cS = 0; 
			int rest[50]; int maxi = -1;

			for(int i = 0 ; i < N ; i++){
				int cX = 0; 
				for(int j = 0 ; j < cube[i].size(); j++){
					if(cube[i][j] == 'X'){
						cX++;
				    }
				}
				rest[i] = cX;
				maxi = max(maxi,cX); 
			}
			int ans = 0;
			for( int i = 0; i < N ; i++){
				int aux = maxi - rest[i];
				ans = ans + aux;
			}
			cout << ans<<endl;
			cube.clear();
		}
        return 0;
}