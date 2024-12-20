class Solution:
    def decodeString(self, s: str) -> str:
        st=[]
        ans=""
        c=0

        for ch in s:
            if ch.isdigit():
                c=c*10+int(ch)
            elif ch=="[":
                st.append((ans,c))
                ans=""
                c=0
            elif ch=="]":
                s,c1=st.pop()
                ans=s+ans*c1
            else:
                ans+=ch

        return ans