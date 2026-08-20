// Last updated: 8/20/2026, 11:10:13 AM
1int pivotIndex(int* nums, int numsSize) {
2
3    for(int mid = 0; mid < numsSize; mid++) {
4
5        int sum1 = 0;
6        int sum2 = 0;
7
8        for(int i = mid + 1; i < numsSize; i++) {
9            sum1 += nums[i];
10        }
11        for(int j = mid - 1; j >= 0; j--) {
12            sum2 += nums[j];
13        }
14        if(sum1 == sum2) {
15            return mid;
16        }
17    }
18
19    return -1;
20}