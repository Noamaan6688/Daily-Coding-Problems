class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        st=set()
        for i in arr:
            if i*2 in st or (i%2==0 and i//2 in st):
                return True
            st.add(i)
        return False