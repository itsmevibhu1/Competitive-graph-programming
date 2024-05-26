int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        int low = 1,high = n - 2;
        int ans = -1;
        if(nums[0] != nums[1])return nums[0];
        else if(nums[n-1] != nums[n-2])return nums[n-1];
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]){
                ans = nums[mid];
                break;
            }
            else if(nums[mid] == nums[mid-1]){
                if(mid % 2){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            else{
                if(mid % 2){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
        }
        return ans;
    }