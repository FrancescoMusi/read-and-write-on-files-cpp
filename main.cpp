#include <assert.h>
#include <stdio.h>

int main() {
	
	int n, s;

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	assert(1 == scanf("%d", &n));
	
	int a[n];
	
	for (int i = 0; i < n; i++) {
		assert(1 == scanf("%d", &a[i]));
		s += a[i];
	}
	
	printf("%d", s);
	
	
	return 0;
}
