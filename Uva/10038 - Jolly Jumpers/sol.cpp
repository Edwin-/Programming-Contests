/******************************************************************************
 * Autor : 	Edwin Payrumani Mamani
 * Judge: 	UVa online-judge 
 * Problem:	10038 - Jolly Jumpers
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

		int N; 
		int sequence[3001], jollyJumper[3001];

		while(scanf("%d",&N) == 1){		
		
			for (int i = 1; i < N; ++i){
				jollyJumper[i] = 0;
			}

			for(int i = 1; i <=N ; i++){
				scanf("%d",&sequence[i]);
			}

			int index;

			for (int i = 1; i <N; i++){
				index = abs(sequence[i] - sequence[i+1]);
				jollyJumper[index] = 1;
			}

			bool flag = true;

			for (int i = 1; i < N; i++)
			{
				if(jollyJumper[i] == 0){
					flag = false;
					break;
				}
			}

			if(flag) printf("%s\n", "Jolly");
			else printf("%s\n","Not jolly");	

		}

        return 0;
}