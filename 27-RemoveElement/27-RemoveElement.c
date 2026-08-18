// Last updated: 8/18/2026, 11:32:26 PM
int removeElement(int* nums, int numsSize, int val) {
    int k=0;
    for(int i =0;i<numsSize;i++){
        if(nums[i]==val){
            continue;
        }
        else
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}