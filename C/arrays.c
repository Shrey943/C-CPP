#include <stdio.h>

int main(){

    int arr1[2][3],i,j;
    int arr2[2][3],a,b;
    int total[2][3],p,q;

    for (i=0;i<2;i++){
        for(j=0;j<3;j++){

            printf("Enter value for array1[%d][%d]:",i,j);
            scanf("%d",&arr1[i][j]);

        }
    }
    printf("\n");
    for (a=0;a<2;a++){
        for(b=0;b<3;b++){

            printf("Enter value for array2[%d][%d]:",a,b);
            scanf("%d",&arr2[a][b]);

        }
    }
    printf("\n");
    for (p=0;p<2;p++){
        for(q=0;q<3;q++){

            total[p][q]=arr1[p][q]+arr2[p][q];

        }
    }
    printf("\n");

    for (p=0;p<2;p++){
       
        for(q=0;q<3;q++){
            printf("%d\t",total[p][q]);
            
        }
        printf("\n");
        
    }


}