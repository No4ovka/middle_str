#include "middle_str.h"

string itc_slice_str(string str, int start, int end){
    string strok="";                //мб старт будет не включая,тогда перезаписать старт
    while (start<itc_len(str)){
        if (start<=end)
            strok+=str[start];
        else if (start>end)
            return strok;
        start++;
    }
    return strok;
}
