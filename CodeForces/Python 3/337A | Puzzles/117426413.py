# Hi
p,q=map(int,input().split())
l=list(map(int,input().split()))[0:q]
l.sort()
x=0
c=1000
while x+p-1<q:
    if l[x+p-1]-l[x]<=c:
        c=l[x+p-1]-l[x]
    x+=1
print(c)