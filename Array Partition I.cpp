//
//  main.cpp
//  Array Partition I
//
//  Created by Lingchao Chen on 7/7/17.
//  Copyright © 2017 Lingchao Chen. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    class Solution {
        public:
        int arrayPairSum(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int total=0;
            for(int i=0;i<nums.size();i+=2)
            {
                total+=nums[i];
                
            }
            return total;
        }
    };
}
