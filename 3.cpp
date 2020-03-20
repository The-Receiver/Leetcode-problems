#include <iostream>
#include <vector>

#include "1_pair.h"
using namespace std;

class TwoSum {
    vector<int> nums;

    public:
        TwoSum(int args ...){

            for (int i : args) 
                nums.push_back(i);

        }

        bool has_pair_sum(int target){

        vector<int> pair = sumPair(target, this->nums);

        return (!pair.empty());

    }

};


int main(){

    TwoSum nums {22, 3, 4, 2, 9, 4, 2};

}