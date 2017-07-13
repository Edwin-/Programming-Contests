/******************************************************************************
 * Autor :  Edwin Payrumani Mamani
 * Judge:   Codeforces
 * Problem:A. Valera and x || Codeforces Round #237 (Div. 2)
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

		
        int n; string line; char letter; char letter2;
        vector<string> square;
        
        scanf("%d",&n);
        for(int i = 0 ; i < n ; i++){
        	cin >> line;
        	square.push_back(line);
        }

        letter = square[0][0]; // letter from diagonal
        letter2 = square[1][0];// other side
        int c = 0; int c2 = 0;
        if(letter != letter2){
	        for(int i = 0 ; i < n ; i++){
	        	for(int j = 0; j < n ; j++){

	        		if( (i == j) || ( i+j == n-1) ){
	        			if(letter == square[i][j]){
	        				c++;
	        			}
	        		}else if(letter2 == square[i][j]){
	        				c2++;
	        		}
	        	}
	        }
	    }
        
        int aux = (n*2) - 1;
        int aux2 = (n*n) - aux;
       
        if(c == aux && c2 == aux2) printf("%s\n","YES");
        else printf("%s\n","NO");

        return 0;
}