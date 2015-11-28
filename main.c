#include <stdio.h>
#include "dlist.h"

int main(void){
    printf("test test\n");
    dlist *dl = dlist_empty();
    dlist_setMemHandler(dl, free);
    char* data1 = "furz";
    char* data2 = "shit";
    char* data3 = "gagu";
    dlist_position *p = dlist_first(dl);
    dlist_insert(dl, p, data1);
    p = dlist_next(dl, p);
    dlist_insert(dl, p, data2);


    return 0;
}