#include <stdio.h>

void z(char n[], char m[], int o) {
    if (n[0] == '\0') {
        m[o] = '\0';
        printf("%s\n", m); 
        return;
    }
    
    m[o] = n[0];
    z(n+1,m,o+1);
    
    z(n+1,m,o);
}


int main() {
    char a[10000] = "abc";
    char b[10000];
    z(a,b,0);
}
