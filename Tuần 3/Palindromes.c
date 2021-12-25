#include<stdio.h>
#include<math.h>

int main(){
    int n, a, b, c, d, e, m;
    scanf("%d", &n);
    m = n;
    e = n%10;
    n = n/10;
    d = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    a = n%10;
    n = n/10;
    
    if( a == e && b == d){
        printf("%d is a palindrome!", m);
    }
    if( a != e && b != d){
        printf("%d is not a palindrome!", m);
    }
}

