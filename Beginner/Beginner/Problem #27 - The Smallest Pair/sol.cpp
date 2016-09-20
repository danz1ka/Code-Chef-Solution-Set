#include<stdio.h>
#include<stdlib.h>
using namespace std;

int compare ( const void* a, const void* b ) { return *(int*)a-*(int*)b; }

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[n];
		for ( int i=0; i<n; ++i ) scanf("%d", &a[i]);
		
		qsort(a, n, sizeof(int), compare);
		
		printf("%d\n", a[0]+a[1]);
	}
}
