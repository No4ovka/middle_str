#include "middle_str.h"

bool itc_isDigit(unsigned char c){
    if ((c > 47) && (c < 58))
        return true;
    return false;
}
unsigned char itc_toUpper(unsigned char c){
    if ((c > 96) && (c < 123))
        return (c - 32);
    return c;
}
unsigned char itc_changeCase(unsigned char c){
    if ((char(c) > 96) && (char(c) < 123))
        return (char(c) - 32);
    else if ((char(c) > 64) && (char(c) < 91))
        return (char(c) + 32);
    return c;
}
