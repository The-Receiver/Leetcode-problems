#include "important_headers.hpp"

using namespace std;

int longest_substr(string str){

    unordered_set<char> chars;
    vector<int> substring_lens {0};
    int curr_i = 0;

    for (int i = 0; i < str.size(); i++){
        char curr = str[i];
        if (chars.find(curr) == chars.end() ){
            chars.insert(curr);
            substring_lens[substring_lens.size() - 1]++;
        } else { 
            substring_lens.push_back(1);
        }
    } 

   return *max_element(substring_lens.begin(), substring_lens.end());

}

int main(){

    cout << longest_substr("aaaaaa") << endl;
    cout << longest_substr("substring") << endl;
    cout << longest_substr("sasaas") << endl;


}

