#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//pseudocode:
// waterbottle vs. erbottlewat
// create a map of pairings
// sort them 
// check if the pairings are equal

class pairing {
    public:
    char index;
    char value;
    
    pairing (char index, char value){
        this->index = index;
        this->value = value;
    }    

    bool is_equal(pairing a){
        return this->index == a.index && this->value == a.value;
    }
};

bool pairing_greater(pairing a, pairing b){
        return a.index > b.index ||
         (a.index == b.index && a.value > b.value);
}

bool is_rotation(string x, string y){

    vector<pairing> x_pairings;
    vector<pairing> y_pairings;

    if (x.length() != y.length() ) return false;

    for (int i = 0; i < x.length(); i++){ 
        x_pairings.push_back( {x[i], x[(i + 1) % x.length()]} );
        y_pairings.push_back( {y[i], y[(i + 1) % y.length()]} );
    }
 
    sort(x_pairings.begin(), x_pairings.end(), pairing_greater);

    sort(y_pairings.begin(), y_pairings.end(), pairing_greater);

    bool ret = true;

    for (int i = 0; i < x_pairings.size(); i++){
        if (!x_pairings[i].is_equal(y_pairings[i])) ret = false;
    }

    return ret;

}

void test_rot(string a, string b){
    bool x = is_rotation(a, b);
    cout << x << endl;
}

int main(){
    test_rot("obviously not", "rotations"); //0
    test_rot("waterbottle", "erbottlewat"); //1
    test_rot("tar", "rat"); // 0
    test_rot("", ""); // 1
    test_rot("1", ""); // 0
}

