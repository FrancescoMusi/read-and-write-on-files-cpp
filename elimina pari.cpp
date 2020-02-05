#include <stdio.h>
#include <assert.h>

int main() {
	int n, max, min, i;
	
	freopen("input/3", "r", stdin);
	freopen("output/3", "w", stdout);
	
	assert( 1 == scanf("%d", &n) );

	int l[N];
	
	for( i = 0; i < n; i++) {
		assert( 1 == scanf("%d", &l[i]) );
	}
	
	max = l[0];
	min = l[0];
	
	for( i = 0; i < n; i++) {
		if (l[i] % 2 != 0) {			
			printf("%d ", l[i]);
		};
	}	
	
	
}
