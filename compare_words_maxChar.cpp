#include "middle_str.h"

bool itc_compare(string s1, string s2){
    long long maxi;
    bool da;
    if (itc_len(s1) >= itc_len(s2))
        maxi = itc_len(s1);
    else
        maxi = itc_len(s2);
    for (int k=0; k < maxi; k++){
        if (s1[k] == s2[k])
            da = true;
        else
            return false;
    }
    if (da == true)
        return true;
    return false;
}
int itc_countWords(string str){
    long long schet = 0;
    bool a = true;
    if (str == "")
        return 0;
    for (long long k = 0; k < itc_len(str); k++){
        if (((char(str[k]) < 65) || (char(str[k]) > 90)) && ((char(str[k]) < 97) || (char(str[k]) > 122)) && (char(str[k]) != 32))
            a = false;
        else if (char(str[k]) == 32 && a == true)
            schet ++;
        else if (str[k] == 32 && a == false)
            a = true;
    }
    if (a == false)
        return schet;
    return schet + 1;
}
string itc_maxCharWord(string str){
    string str1, str2;
    int a=0, b=0;
    bool verno = false;
    for(int k=0; k < itc_len(str); k++){
        if (char(str[k]) == ' '){
            str2 = "";
            b = 0;
            verno = true;
        }else {
            if (((char(str[k]) > 64) && (char(str[k]) < 91)) || ((char(str[k]) > 96) && (char(str[k]) < 123))){
                b++;
                str2 += str[k];
            }
        }
        if (b > a){
                a = b;
                str1 = str2;
            }
    }
    if (a == 0)
        return "error";
    if (verno == true)
        return str1;
    return "error";
}
