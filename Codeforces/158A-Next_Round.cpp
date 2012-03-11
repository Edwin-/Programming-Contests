#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <vector>

using namespace std;
void carga( int c[128], int n){
   for(int i=0;i<n;i++){
      cin>>c[i];
   }

}
int main() {
int n, k;
int Paseronda = 0;

int p[128];
	scanf("%d%d", &n, &k);
	k--;
	carga(p,n);

	for (int i = 0; i<n; i++)
		if (p[i] > 0 && p[i]>=p[k])
			Paseronda++;

	printf("%d",Paseronda);
	return 0;
}

