    map<int,int> cnt;int p;
        for(int x:nums)
        {
            cnt[x]++;
        }
        for(int i=0;i<nums.size();i++)
        {   p=nums[i];
            if(cnt[p]>nums.size()/2)
                break;
        }
        return p;
    }
