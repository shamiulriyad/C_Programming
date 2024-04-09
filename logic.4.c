



//akta sonkhake kon kon sonkha dara vagh kora jai





#include<stdio.h>
void print_divisors(int x){
    int i;
    for(i=1;i<=x;i++){
        if(x%2==0){
            printf("%d\n",i);
        }
    }
}                                               

int main(){

    print_divisors(40);

    return 0;
}