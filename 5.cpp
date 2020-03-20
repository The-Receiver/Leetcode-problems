#include <iostream>
#include <string>

using namespace std;

int strStr(string needle, string haystack){

    int nsize = needle.size();
    int hsize = haystack.size();


    for (int i = 0; i < haystack.size() - nsize; i++){
            if (needle == haystack.substr(i, i + nsize))
                return i;
    }

    return -1;
}

int main(){

    cout << strStr("needle", "needle in a haystack") << endl;
    cout << strStr("r", "p q r s") << endl;


}