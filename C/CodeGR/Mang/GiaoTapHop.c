#include <stdio.h>
#define MAX 100
void output( int a[], int n, char* s ) {
    int i;
    printf( "%s: { ",s );
    for ( i = 0; i < n; ++i )
    printf( "%d%s", a[i], ( i == n-1 ) ? " }\n" : ", " );
}
int isMember( int a[], int n, int x ) {
    int i;
    for ( i = 0; i < n; ++i )
    if ( x == a[i] ) return 1;
    return 0;
}
int AandB( int a[], int n, int b[], int m, int c[] ) {
    int i, j, k;
    for ( k = i = 0; i < n; ++i )
    for ( j = 0; j < m; ++j )
    if ( b[j] == a[i] )
    c[k++] = a[i];
    return k;
}
int AorB( int a[], int n, int b[], int m, int c[] ) {
    int i, j, k;
    i = j = k = 0;
    while ( i < n ) c[k++] = a[i++];
    while ( j < m )
    if ( !isMember( a, n, b[j] ) )
    c[k++] = b[j++];
    else j++;
    return k;
}
int AdecB( int a[], int n, int b[], int m, int c[] ) {
    int i, k;
    for ( k = i = 0; i < n; ++i )
    if ( !isMember( b, m, a[i] ) )
    c[k++] = a[i];
    return k;
}
int main(){
    int a[] = { 1, 2, 3, 5 };
    int b[] = { 1, 3, 6, 7 };
    int c[MAX];
    int n, m, k;
    
    n = sizeof a / sizeof *a;
    m = sizeof b / sizeof *b;
    output( a, n, "Tap hop A" );
    output( b, m, "Tap hop B" );
    k = AandB( a, n, b, m, c );
    output( c, k, "C = A * B" );
    k = AorB( a, n, b, m, c );
    output( c, k, "C = A + B" );
    
    k = AdecB( a, n, b, m, c );
    output( c, k, "C = A \\ B");
    return 0;
}