#include "middle_str.h"

string perevod(int num){
    int obr=10;
    string str = "";
    while (num != 0){
        obr = (obr * 10 +(num%2));
        num = num/2;
    }
    while (obr != 10){
        str += itc_ToString(obr%10);
        //str += obr%10;
        obr = obr/10;
    }
    return str;
}
