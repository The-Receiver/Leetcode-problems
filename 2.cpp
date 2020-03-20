#include <iostream>
#include <vector>

using namespace std;

vector<int> sumPair (int target, vector<int> numArray){
    int i = 0;
    int j = numArray.size() - 1;
    vector<int> ret;

    while ( i < j ){

        int vali = numArray[i];
        int valj = numArray[j];

        if (vali + valj == target) {

            if (i > j) { ret.push_back(j); ret.push_back(i); }
            else { ret.push_back(i); ret.push_back(j); }       
            return ret; 

        } else if (vali + valj < target){
            i++;
        } else if (vali + valj > target){
            j--;
        }

    } return ret;

}

int main(){
    vector<int> nums {1, 2, 8, 10, 13, 29, 29, 97};
    //Chooses the lower value of i for what it's worth
    vector<int> pair = sumPair(39, nums);
    cout << pair[0] << " " << pair[1] << std::endl;

}