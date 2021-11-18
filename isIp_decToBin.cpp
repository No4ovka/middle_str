#include "middle_str.h"

bool itc_isIp(string str){
    long long len = itc_len(str), point = 0;
    string nov;
    for(int i = 0; i < len; i++){
        if(str[i] != '.'){
            nov += str[i];
        }
        else if(str[i] == '.'){
            if(itc_len(nov) > 3)
                return false;
            else if((itc_ToInt(nov) > 255) || (itc_ToInt(nov) < 0)){
                return false;
            }
            nov = "";
            point++;
        }
    }
    if(point != 3)
        return false;
    return true;
}
string itc_DecToBin(string str){
    int num = 0, k = 0;
    string str1 = "";
    while  ( k<itc_len(str)){
        if (char(str[k]) > 47 && char(str[k]) < 58){
            while (char(str[k]) > 47 && char(str[k]) < 58){
                num = num * 10 + (char(str[k]) - 48);
                k++;
            }
            str1 += perevod(num);
        }
        else{
            str1 += str[k];
            k++;
        }
        num = 0;
    }
    return str1;
}
string itc_decToBase(int num, int base){
    string str = "", str1 = "";
    int o;
    while (num != 0){
        //obr=(obr * 10 +(num%2));
        if ((num % base) == 10)
            str += 'A';
        else if((num % base) == 11)
            str += 'B';
        else if((num % base) == 12)
            str += 'C';
        else if((num % base) == 13)
            str += 'D';
        else if((num % base) == 14)
            str += 'E';
        else if((num % base) == 15)
            str += 'F';
        else
            str += itc_ToString(num % base);
        num = num / base;
    }
    for (int k = itc_len(str) - 1; k > -1; k--){
        str1 += str[k];
        //str += obr%10;
    }
    return str1;
}

