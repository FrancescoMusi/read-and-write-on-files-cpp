#include <stdio.h>
#include <assert.h>

#include <iostream>
#include <algorithm>
using namespace std;

#define MAXN 1000

int main() {
	int n, max, min, i;
	
	int a[MAXN];
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	scanf("%d", &l[0]);
	//si pa ++n così aumenta il valore e restituisce il valore aumentato
	while(1 == scanf("%d", &l[++n])) {}
	
	max = a[0];
	min = a[0];
	
	//prende l'array e l'array+la lunghezza
	sort(a, a+n);
	
	for (i = 1; i < n; i++) {
		
		if (a[i] > max) {
			max = a[i];
		};
		if (a[i] < min) {
			min = a[i];
		};
		
		printf("%d ", a[i]);
	}
	
	printf("\n%d %d", min, max);
}
