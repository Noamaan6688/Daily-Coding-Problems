# Hi
l=[4,7,44,47,74,77,444,447,474,477,744,747,774,777]
k=int(input())
c=0
for x in range(len(l)):
    if k==l[x]:
        c=1
    elif k>l[x]:
        if k%l[x]==0:
            c=1
    else:
        break
if c==1:
    print("YES")
else:
    print("NO")