class Solution:
    def fourSum(self, nums: List[int], tar: int) -> List[List[int]]:
        res=[]
        nums.sort()
        n=len(nums)
        for i in range(n):
            for j in range(i+1,n):
                c=tar-nums[i]-nums[j]
                l,r=j+1,n-1
                while (l<r):
                    if (nums[l]+nums[r])<c:
                        l+=1
                    elif (nums[l]+nums[r])>c:
                        r-=1
                    else:
                        st=[]
                        st.append(nums[i])
                        st.append(nums[j])
                        st.append(nums[l])
                        st.append(nums[r])
                        if st not in res:
                            res.append(st)
                        l+=1
                        r-=1
        return res
        