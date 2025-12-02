#include <stdio.h>
#include "instant.h"

int instant_parse(const char* str, struct instant *init) {
    int items_scanned;
    items_scanned = sscanf(str, "%d:%d:%d", &init->hour, &init->minute, &init->second);
    
    if (items_scanned == 3) {
        return 0;
    } else {
        return 1;
    }
}

int instant_check(struct instant i) {
    if (i.hour >= 0 && i.hour <= 23 &&
        i.minute >= 0 && i.minute <= 59 &&
        i.second >= 0 && i.second <= 59) {
        return 0;
    } else {
        return 1;
    }
}

int instant_compare(struct instant i1, struct instant i2) {
    if (i1.hour != i2.hour) {
        return i1.hour - i2.hour;
    }
    if (i1.minute != i2.minute) {
        return i1.minute - i2.minute;
    }
    return i1.second - i2.second;
}

void instant_read_vector(struct instant *v, int n) {
    int count = 0;
    char buffer[20];
    struct instant temp;

    while (count < n) {
        scanf("%s", buffer);
        
        if (instant_parse(buffer, &temp) == 0) {
            if (instant_check(temp) == 0) {
                v[count] = temp;
                count++;
            }
        }
    }
}

struct instant instant_largest(const struct instant *v, int n) {
    struct instant largest = v[0];
    int i;

    for (i = 1; i < n; i++) {
        if (instant_compare(v[i], largest) > 0) {
            largest = v[i];
        }
    }

    return largest;
}