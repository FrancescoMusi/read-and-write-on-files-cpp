#include <stdio.h>
#include <assert.h>

int main() {
	int N, max, min, i;
	
	freopen("input/3", "r", stdin);
	freopen("output/3", "w", stdout);
	
	assert( 1 == scanf("%d", &N) );

	int lista[N];
	
	for( i = 0; i < N; i++) {
		assert( 1 == scanf("%d", &lista[i]) );
	}
	
	max = lista[0];
	min = lista[0];
	
	for( i = 0; i < N; i++) {
		if (lista[i] % 2 != 0) {			
			printf("%d ", lista[i]);
		};
	}	
	
	
}
