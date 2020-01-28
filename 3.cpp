#include <stdio.h>
#include <assert.h>

int main() {
	int n, i;
	
	freopen("input/3", "r", stdin);
	freopen("output/3", "w", stdout);
	
	assert( 1 == scanf("%d", &n) );

	int l[n*2];
	
	for( i = 0; i < n*2; i++) {
		assert( 1 == scanf("%d", &l[i]) );
	}
	
	for (i = 0; i < n*2; i += 2) {
		printf("%d ", l[i] + l[i+1]);
	}
		
	
	
}
