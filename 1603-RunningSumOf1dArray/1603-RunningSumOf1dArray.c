// Last updated: 8/18/2026, 11:06:21 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* ans = (int*)malloc(numsSize * sizeof(int));
    ans[0] = nums[0];
    for (int i=1;i < numsSize;i++){
        ans[i] = ans[i-1]+nums[i];
    }
    *returnSize = numsSize;
    return ans;
}
