#include "middle_str.h"

char itc_sameChar(string str){
    char a;
    for (int k = 0; k < itc_len(str); k++){
        for (int i = 0; i < itc_len(str); i++){
            if (k == i)
                int b=0;
            else if (str[k] == str[i])
                return str[k];
        }
    }
}
bool itc_isFirstInSecond(string s1, string s2){
    bool a;
    string st1,st2;
    for (int k = 0; k < itc_len(s2); k++){
        if (s1[0] == s2[k]){
            a = true;
            for (int i = 0; i < itc_len(s1); i++){
                if (s1[i] != s2[k+i])
                    a = false;
            }
            if (a == true)
                return a;
        }
    }
    return false;
}
