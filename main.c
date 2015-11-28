#include <stdio.h>
#include "dlist.h"

int main(void){
    int iii;
    printf("test test\n");
    dlist *dl = dlist_empty();
    dlist_setMemHandler(dl, free);
    char* data1 = "furz";
    char* data2 = "shit";
    char* data3 = "gagu";
    char *data[3] = {data1, data2, data3};

    dlist_position p = dlist_first(dl);
    for (iii = 0; iii < 3;iii++){
        dlist_insert(dl, p, data[iii]);
        p = dlist_next(dl, p);
    }

    p = dlist_first(dl);

    for (iii = 0; iii < 3; iii++){
        printf("%s\n", (char*) dlist_inspect(dl, p));
        p = dlist_next(dl, p);
    }

    return 0;
}