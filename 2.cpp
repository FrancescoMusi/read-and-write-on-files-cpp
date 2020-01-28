#include <stdio.h>
#include <assert.h>

int main() {
	int n, i;
	
	freopen("input/2", "r", stdin);
	freopen("output/2", "w", stdout);
	
	assert( 1 == scanf("%d", &n) );

	int l[n];
	
	for( i = 0; i < n; i++) {
		assert( 1 == scanf("%d", &l[i]) );
	}
	
	for (i = 0; i < n; i++) {
		if (l[i] % 2 == 0) {
			printf("%d ", l[i]+1);
		} else {
			printf("%d ", l[i]-1);
		}
		
	}
		
	
	
}
