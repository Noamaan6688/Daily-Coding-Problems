class Solution:
    def compressedString(self, word: str) -> str:
        s=""
        c=1
        i=1
        ch=word[0]
        while i<len(word):
            if ch==word[i]:
                c+=1
                if c==9:
                    s+=str(c)
                    s+=ch
                    c=0
                    if (i+1<len(word)):
                        ch=word[i+1]
            else:
                s+=str(c)
                s+=ch
                c=0
                ch=word[i]
                i-=1
            i+=1
        if c>0:
            s+=str(c)
            s+=ch
        return s
            