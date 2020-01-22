#include <stdio.h>
#include <assert.h>

int main() {
	int n, k, p = 1, i;
	
	freopen("input/5", "r", stdin);
	freopen("output/5", "w", stdout);
	
	//c = char
	assert( 1 == scanf("%c", &n) );

	int l[n];
	
	for( i = 0; i < n; i++) {
		assert( 1 == scanf("%d", &l[i]) );
	}

	for( i = 0; i < n; i++) {
		if (l[i] != 0 && l[i] != k) {
			p*=l[i];
		} 
	}	
	
	
	printf("%d", p);
}
