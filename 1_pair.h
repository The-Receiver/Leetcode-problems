#include <map>
#include <vector>

std::vector<int> sumPair (int target, std::vector<int> numArray){

    std::map<int, int> pairs; 
    std::vector<int> ret;
        for (int i = 0; i < numArray.size(); i++){

            int curr = numArray[i];
            pairs[curr] = i;
            int paired = target - curr;

            if (pairs.find(paired) != pairs.end()){

                int curri = pairs[curr];
                int pairedi = pairs[paired];

                if (pairedi > curri) {
                    ret.push_back(curri); ret.push_back(pairedi);
                } else {
                    ret.push_back(pairedi); ret.push_back(curri);
                }

                return ret;
            }
        } 
}