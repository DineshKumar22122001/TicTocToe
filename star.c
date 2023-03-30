#include <stdio.h>;

int main() {
    int a=5;
    for(int i=1;i<=a;i++){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf('/n');
    }
    return 0;
}