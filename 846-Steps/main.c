#include <stdio.h>
#include <stdlib.h>

#define POS(x) ((x < 0) ? (-x) : (x))

int main(int argc, char  *argv[]){
    int k, m, n;
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
        scanf("%d %d", &m, &n);
        int dist = POS(m - n);
        int steps = 0, step = 1;
        if(!dist){
            printf("0\n");
            continue;
        }
        if(dist == 1){
            printf("1\n");
            continue;
        }
        while(dist >= step){
            if(dist > 2*step){
                dist -= 2*step;
                steps += 2;
                step++;
            } else{
                dist -= step;
                steps++;
            }
        }
        if(dist != 0) steps++;
        printf("%d\n", steps);
    }
    return 0;
}
