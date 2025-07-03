#include<stdio.h>
#include<stdbool.h>
int main(){
    int e , o, cases , n  =0; 
    scanf("%d",&cases);
    for(int i = 0 ; i < cases ; i ++){
        scanf("%d %d" , &o , &e);
        while(true){
            int a  =0 ; int b  = 0;
            for(int j  = 1 ; j <= n;j++){
                if(n % j == 0){
                    if(j % 2 == 0){
                        a++;
                    }
                    else{
                        b++;
                    }
                }
            }
            n++;
            if(a == e && b == o){
                printf("Yes\n");
                break;
            }
            if (a > e || b > o){
                printf("No\n");
                break;
            }
        }
    }
    return 0;
}
