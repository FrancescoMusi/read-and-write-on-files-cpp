#include <assert.h>
#include <stdio.h>

int main() {
	
	int n, s;
	
	//se in un altra cartella -> "/inputs/input.txt"
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	//assert serve per il debug, si potrebbe fare senza	
	assert(1 == scanf("%d", &n));
	
	int a[n];
	
	for (int i = 0; i < n; i++) {
		assert(1 == scanf("%d", &a[i]));
		s += a[i];
	}
	
	//scrive su file un decimale (d)
	printf("%d", s);	
	
	return 0;
}


/*
agent Francesco Musi
*/
