# include <stdio.h>
void AvgSum(int *i,int j,int *sum,float *avg);
int main(){

    int i,j;
    scanf("%d%d",&i,&j);
    int sum; 
    float avg;
    AvgSum(&i,j,&sum,&avg);
    printf("Sum of %d and %d is : %d\n",i,j,sum);
    
    printf("Avg of %d and %d is : %f",i,j,avg);
    return 0;
}

void AvgSum(int *i,int j,int *(sum),float *avg){

    // *i = j;
    *sum = *i+j;
    *avg = (float) *sum/2;
}