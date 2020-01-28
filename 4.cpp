#include <stdio.h>
#include <assert.h>

int main() {
	int n, m, i, v, j, sum=0;
	
	freopen("input/4", "r", stdin);
	freopen("output/4", "w", stdout);
	
	assert( 1 == scanf("%d", &n) );
	
	for ( i = 0; i < n; i++ ) {
		
		assert( 1 == scanf("%d", &m));
		
		for ( j = 0; j < m; j++ ) {
			assert( 1 == scanf("%d", &v) );
			sum += v;
		}	
		
	}
	
	printf("%d ", sum);
	
}
