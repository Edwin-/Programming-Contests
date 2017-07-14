/******************************************************************************
 * Autor : Edwin Payrumani Mamani
 * Judge:  Codeforces
 * Problem: B. Filya and Homework || Codeforces Round #371 (Div. 2)
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
       //filya is allowed to pick any integer X (random number)
      int n , a; int Farray[100001];
      set<int> data; set<int>::iterator it=data.begin();
      scanf("%d",&n);
      for(int i = 0; i < n; i ++){
      	scanf("%d",&a);
      	data.insert(a);
      }  
	  if(data.size()  <= 2){
	  	printf("%s\n","YES");
	  }else if(data.size() >= 4){
	  		printf("%s\n", "NO"); 
	  }
	  if(data.size() == 3){
		  int aux[4]; int c = 0;
		  foreach(data,it){
		  	aux[c] = *it;
		  	c++;
		  }
		 int num1 = aux[0] - aux[1];
		 int num2 = aux[1] - aux[2];
		
		 if( num1 == num2) printf("%s\n","YES");
		 else printf("%s\n", "NO");
		  
	   }

    return 0;
}