# include <stdio.h>
# include <string.h>

struct players{
    int id;
    char name[];
}plyr;

// void display(plyr *p);

int main(){

    
    plyr.id = 23332;
    // p1.name = "Shrey Jain";
    strcpy(plyr.name,"Shrey Jain");
    // display(&plyr);

    printf("%d\n",plyr.id);
    printf("%s\n",plyr.name);
    // printf("%d\n",sizeof(plyr.name));
    return 0;
}

// void display(plyr *p){
//     printf("%d\n",p->id);
//     printf("%s", p->name);
    
    
    // }