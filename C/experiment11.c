# include <stdio.h>

int main(){

    int first = 0;
    int second = 1;
    int n , total ;

    printf("How long series do you want : ");
    scanf("%d",&n);

    printf("%d\t%d\t",first,second);

    for (int i = 0 ; i < n ; i++){
       
        total = first + second;
        printf("%d\t",total);
        first = second;
        second = total;
    }

    return 0;
}