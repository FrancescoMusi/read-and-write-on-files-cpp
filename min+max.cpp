#include <stdio.h>
#include <assert.h>

int main() {
	int n, max, min, i;
	
	freopen("input/2", "r", stdin);
	freopen("output/2", "w", stdout);
	
	assert( 1 == scanf("%d", &n) );

	int lista[N];
	
	for( i = 0; i < n; i++) {
		assert( 1 == scanf("%d", &l[i]) );
	}
	
	max = l[0];
	min = l[0];
	
	for( i = 1; i < n; i++) {
		if (l[i] > max) {
			max = l[i];
		};
		if (l[i] < min) {
			min = l[i];
		};
	}	
	
	printf("%d", min + max);
}
