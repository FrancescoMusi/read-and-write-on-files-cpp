#include <stdio.h>
#include <assert.h>

int main() {
	int n, i;
	
	freopen("input/5", "r", stdin);
	freopen("output/5", "w", stdout);
	
	assert( 1 == scanf("%d", &n) );

	int l[n*3];
	
	for( i = 0; i < n*3; i++) {
		assert( 1 == scanf("%d", &l[i]) );
	}
	
	for (i = 0; i < n*3; i += 3) {
		printf("%d ", (l[i] + l[i+1] + l[i+2])/3);
	}
		
	
	
}
