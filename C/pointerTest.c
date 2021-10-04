   # include <stdio.h>
   
   int main(){
   
       char a = "10.0" , *ptr= &a;
       printf("Address of a is : % u\n",ptr);
       printf("value of a is : %s\n",*ptr);
       ptr++;
       printf("New address of a is : %u\n",ptr);
       printf("New value of a is : %d\n", *ptr);
       return 0;

   }