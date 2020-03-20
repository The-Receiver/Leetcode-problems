#include <iostream>
#include <map>
#include <vector>
#include <exception>

#include "1_pair.h"

//#define EXISTS(m, k) (m.find(k) != m.end())

int main(){
    std::vector<int> nums {1, 2, 8, 13, 29, 10, 29, 97};
    //Chooses the lower value of i for what it's worth
    std::vector<int> pair = sumPair(39, nums);
    std::cout << pair[0] << " " << pair[1] << std::endl;
    //Returns empty vector if no match is found
    pair = sumPair(10029, nums);
    if (!pair.empty()) std::cout << pair[0] << " " << pair[1] << std::endl;
}
