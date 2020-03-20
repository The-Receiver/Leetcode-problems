#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool not_alphanum(char a){
    return !( ('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z') || ('0' <= a && a <= '9') );
}

bool is_palindrome(string str){
       // string reversed = reverse(input.begin(), input.end());
       str.erase(remove_if(str.begin(), str.end(), not_alphanum), str.end());
       transform(str.begin(), str.end(), str.begin(), ::tolower);
       
       string reversed = str; reverse(reversed.begin(), reversed.end());

       return reversed == str;
}

int main(){

   cout << is_palindrome("RACEcar39922") << endl;
   cout << is_palindrome("raceCaR.") << endl;

}

