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
    char* data4 = "drack";
    char *data[4] = {data1, data2, data3, data4};

    dlist_position p = dlist_first(dl);
    for (iii = 0; iii < 4;iii++){
        dlist_insert(dl, p, data[iii]);
        p = dlist_next(dl, p);
    }

    p = dlist_first(dl)->next;

    for (iii = 0; iii < 20; iii++){
        printf("%s\n", (char*) dlist_inspect(dl, p));
        p = dlist_first(dl);
    }

    return 0;
}