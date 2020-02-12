#include <stdio.h>
#include <assert.h>
#include <algorithm>
using namespace std;

#define MAX 100

int ordina(int l[], int n);


int main() {
	int l[MAX], n = 0, i, j, temp;
	
	freopen("pesi.txt", "r", stdin);
	
	scanf("%d", &l[0]);
	//si usa ++n perchè così incrementa n e ritorna n incrementato
	while(1 == scanf("%d", &l[++n])) {}
	
	//sort(l, l+n);	
	ordina(l, n);
	
	
	for ( i = 0; i < n; i++ ) {
		printf("%d ", l[i]);		
	}
	
	printf("\n%d %d", l[0], l[n-1]);
	
}


int ordina(int l[], int n) {
	int temp, i, j;
	
	for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < n-1; j++ ) {
            if ( l[j] > l[j+1] ) { 
            
            	temp = l[j+1];
            	l[j+1] = l[j];
            	l[j] = temp;
         	}
      	}
    }
};

