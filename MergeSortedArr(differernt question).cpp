//a1[]={2,5,9,0,0,0} and a2[]={7,5,4}          desired result a1[]={2,4,5,5,7,9}   i.e. removal of zero and in place of those zeros elements of a[2] are to be placed and the resultant a1[] array should be sorted containing all the six values
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // removing zeroes
        for(int i = 0; i<nums2.size() ; i++){
            nums1.pop_back();
        }
        
        
        for(int i = 0; i<nums2.size() ; i++){
            nums1.push_back(nums2[i]);
        }
        
        sort(nums1.begin() , nums1.end());

    }
};
