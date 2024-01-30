class Solution
{
public:
    int BinarySearch(vector<int> &nums, int target, int s, int e)
    {
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (target == nums[mid])
            {
                return mid;
            }
            else if (target < nums[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return -1;
    }
    int findPivot(vector<int> &nums)
    {
        int s = 0;
        int e = nums.size() - 1;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (nums[mid] > nums[mid + 1] && mid < e)
            {
                return mid;
            }
            else if (nums[mid] < nums[mid - 1] && mid > s)
            {
                return mid - 1;
            }
            else if (nums[mid] <= nums[s])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return -1;
    }

    int search(vector<int> &nums, int target)
    {
        int pivot;
        if(nums.size()==2){
            if(nums[0]==target){
                return 0;
            }
            else if(nums[1]==target){
                return 1;
            }
            return -1;
        }
        if(nums.size()==1){
            if(nums[0]==target){
                return 0;
            }
            
            return -1;
        }
        
        pivot = findPivot(nums);
        if (pivot == -1)
        {
            return BinarySearch(nums, target, 0, nums.size() - 1);
        }
        else if (nums[pivot] == target)
        {
            return pivot;
        }
        else if (  nums[0]<=target)
        {
            return BinarySearch(nums, target, 0, pivot - 1);
        }
        return BinarySearch(nums, target, pivot + 1, nums.size() - 1);
    }
};

