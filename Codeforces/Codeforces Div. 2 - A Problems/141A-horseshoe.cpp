/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   Codeforces
 * Problem: A. Is your horseshoe on the other hoof?|| Codeforces Round #141 (Div. 2)
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
        
        int s1 , s2 , s3 , s4;
        map<int, int> horseshoes;
        scanf("%d%d%d%d", &s1 ,&s2, &s3, &s4);
	    horseshoes[s1]++;horseshoes[s2]++;
        horseshoes[s3]++;horseshoes[s4]++;

        int c = horseshoes.size();

        printf("%d\n", 4 - c);
        return 0;
}