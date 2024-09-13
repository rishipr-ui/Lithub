#include <stdio.h>

int find_nth_number(int x, int y, int n) {
    
    if (n % 3 == 0)
        return x;
    else if (n % 3 == 1)
        return y;
    else
        return x ^ y;
}

int main() {
    int t, x, y, n;
    
    
    scanf("%d", &t);
    
    
    while (t--) {
        
        scanf("%d %d %d", &x, &y, &n);
        
        
        printf("%d\n", find_nth_number(x, y, n));
    }
    
    return 0;
}