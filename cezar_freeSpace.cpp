#include "middle_str.h"

string itc_Cezar(string str, int k){
    string cez = "";
    for (int i = 0; i < itc_len(str); i++){
        char a = char(str[i]);
        if ((a > 64) && (a < 91)){
            if (a > (90 - k)){
                cez += (a + k - 26);
            }
            else if (a < (65 - k)){
                cez += (a + k + 26);
            }
            else
                cez += (a + k);
        }
        else if ((a > 96) && (a < 123)){
            if (a > (122 - k)){
                cez += (a + k - 26);
            }
            else if (a < (97 - k)){
                cez += (a + k + 26);
            }
            else
                cez += (a + k);
        }
        else
            cez += a;
    }
    return cez;
}

string itc_rmFreeSpace(string str){
    string str1;
    for (int k = 0; k < itc_len(str); k++){
        if ((char(str[k]) == ' ') && (char(str[k+1]) == ' '))
            str1 = str1;
        else
            str1 += str[k];
    }
    int len2 = itc_len(str1);
    if(str1[len2 - 1] == ' ' && str1[0] == ' ')
        return itc_slice_str(str1, 1, itc_len(str1) - 2);
    else if (str1[len2 - 1] == ' ')
        return itc_slice_str(str1, 0, itc_len(str1) - 2);
    else if (str1[0] == ' ')
        return itc_slice_str(str1, 1, itc_len(str1) - 1);
    return str1;
}
