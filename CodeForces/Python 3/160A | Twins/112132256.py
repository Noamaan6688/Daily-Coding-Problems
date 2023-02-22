# Hi
k=int(input())
l=list(map(int,input().split()))[0:k]
l.sort()
i=k-1
c=0
while sum(l[i:k])>0:
    if sum(l[i:k])>sum(l[0:i]):
        c=k-i
        # print(sum(l[i:k]),sum(l[0:i]))
        break
    else:
        i-=1
print(c)