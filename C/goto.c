# include <stdio.h>

int main(){

    int i = 0;
    for (;i<5;++i){
        for (int j = 0; j < 10; i++)
        {
            printf("HELLO");
            if (j==2)
            goto end;
        }
        
        printf("%d\n",i);
    }
    end:
    printf("end");

    return 0;
}