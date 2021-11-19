#include "middle_str.h"

char itc_sameChar(string str){
    long long a = itc_len(str);
    if (str == "")
        return ' ';
    for (int k = 0; k < a; k++){
        for (int i = 0; i < a; i++){
            if ((k != i) &&(str[k] == str[i]))
                return str[k];
            }
        }
}

bool itc_isFirstInSecond(string s1, string s2){
    bool a;
    string st1,st2;
    if (itc_len(s1) == 0)
        return true;
    for (int k = 0; k < itc_len(s2); k++){
        if (s1[0] == s2[k]){
            a = true;
            for (int i = 0; i < itc_len(s1); i++){
                if (s1[i] != s2[k+i])
                    a = false;
            }
            if (a == true)
                return true;
        }
    }
    return false;
}
