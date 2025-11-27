#include <cstdio>

void watermelon(int w){
    if(w < 4 || (w & 1)){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}

int main(){
    int w;
    if(scanf("%d", &w) == 1){
        watermelon(w);
    }
    return 0;
}