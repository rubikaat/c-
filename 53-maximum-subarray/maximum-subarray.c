int maxSubArray(int* nums, int numsSize) {
    int sum=0;
    int i;
    int max=INT_MIN;
    for(int i=0;i<numsSize;i++)
    {
    if(sum<0)
    {
    sum=0;
    }
    sum=sum+nums[i];
    
    if(sum>max)
    {
    max=sum;
    }
    }
    
    return max;
}
