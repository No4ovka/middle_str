#include "middle_str.h"

string itc_ToString(int num){
    string res = "", result = "";
    int point;
    if(num == 0){
        return "0";
    }
    while(num > 0){
        point = num % 10;
        res += '0' + point;
        num = num / 10;
    }
    for(int i = itc_len(res) - 1; i >= 0; i--){
        result += res[i];
    }
    return result;
}
long long itc_ToInt(string str){
    long long num = 0;
    for(int i = 0; i < itc_len(str); i++){
        if(str[i] >= '0' and str[i] <= '9'){
            num = num * 10 + (str[i] - '0');
        }
    }
    return num;
}
