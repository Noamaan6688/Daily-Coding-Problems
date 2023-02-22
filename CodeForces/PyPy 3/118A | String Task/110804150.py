# Hi
s = str(input())
s = s.lower()
l = ['a', 'e', 'i', 'o', 'u', 'y']
for x in s:
    if x in l:
        s = s.replace(x, "")
# print(s)
for y in range(len(s)):
    print('.'+s[y],sep="",end="")