class Solution:
    def findSubstring(self, s: str, words: List[str]) -> List[int]:
        n1,n2=len(s),len(words[0])
        n3=len(words)*n2
        l=[]
        words.sort()
        for i in range(n1):
            if i+n3<=n1:
                s1=s[i:i+n3]
                c,j=1,0
                l1=[]
                # print(s1)
                while j<len(s1):
                    s2=s1[j:j+n2]
                    if s2 not in words:
                        c=0
                        break
                    else:
                        l1.append(s2)
                    j+=n2
                    # print(s1,s2)
                l1.sort()
                # print(l1,words)
                if c==1 and l1==words:
                    l.append(i)
        return l
                    
            
            