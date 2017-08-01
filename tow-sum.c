/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

原地址: https://leetcode.com/problems/two-sum/description/
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
Seen this question in a real interview before?   Yes  No
Difficulty:Easy
Total Accepted:566.7K
Total Submissions:1.7M
Contributor: LeetCode
Subscribe to see which companies asked this question.

Related Topics 
Array Hash Table 
Similar Questions 
3Sum 4Sum Two Sum II - Input array is sorted Two Sum III - Data structure design Subarray Sum Equals K 
*/ 

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i,j;
    int *p;
    p = (int *)malloc(sizeof(int)*2);
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j] == target){
                p[0] = i;
                p[1] = j;
                break;
            }
        }
    }
    return p;
}
