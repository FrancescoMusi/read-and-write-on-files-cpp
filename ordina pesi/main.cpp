#include <stdio.h>
#include <assert.h>
#include <algorithm>
using namespace std;

#define MAX 100

int main() {
	int l[MAX], n = 0, i;
	
	freopen("pesi.txt", "r", stdin);
	
	scanf("%d", &l[0]);
	while(1 == scanf("%d", &l[n++])) {}
	
	sort(l, l+n);	
		
	for ( i = 0; i < n; i++) {
		printf("%d ", l[i]);		
	}
	
	printf("\n%d %d", l[0], l[n-1]);
	
}


