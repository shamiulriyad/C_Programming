 #include<stdio.h>
void even_or_odd(int x){
    if(x % 2 ==0){
        printf("EVEN\n");
    }else{
        printf("odd\n");
    }

}

int main()
{

    even_or_odd(10);
    
    return 0;
}