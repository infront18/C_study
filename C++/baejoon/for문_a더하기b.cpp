#include <stdio.h>

int main()

{

    int n,m,t,i;

    scanf("%d", &t);

    for(i=0; i<t; i++) {

        scanf("%d %d", &n, &m);

        printf("%d\n", n+m);

    }

    return 0;

}