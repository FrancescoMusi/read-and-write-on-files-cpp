#include <stdio.h>
#include <assert.h>

int main() {
	int n, sum, i;
	
	freopen("input/1", "r", stdin);
	freopen("output/1", "w", stdout);
	
	assert( 1 == scanf("%d", &n) );

	int l[n];
	
	for( i = 0; i < N; i++) {
		assert( 1 == scanf("%d", &l[i]) );
	}
	
	for( i = 0; i < n; i++) {
		sum += l[i];
	}	
	
	printf("%d", sum);
}

/*
agent Francesco Musi
*/
