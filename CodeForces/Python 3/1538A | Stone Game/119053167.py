# Hi
r=int(input())
while(r>0):
    k=int(input())
    l=list(map(int,input().split()))[0:k]
    p=l.index(max(l))
    q=l.index(min(l))
    print(min(max(p+1,q+1),min(max(k-p,k-q),min(k-p+q+1,k-q+p+1))))
    r-=1