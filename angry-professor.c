#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void validity(int nv, int nk){
    int min;
    int chk = 0;
    for (int j = 0; j < nv; j++){
        scanf("%d ",&min);
        if (min<=0) {
            chk =  chk + 1;
        }
    }
    if (chk >= nk) {
        printf("NO\n");
    }else {
        printf("YES\n");
    }
}

void angry_prof(int tick) {
    int n,k;
    int i;
    
    for (i =0; i < tick; i++){
        scanf("%d %d",&n,&k);
        validity(n,k);   
    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    scanf("%d", &T);
    angry_prof(T);
    return 0;
}