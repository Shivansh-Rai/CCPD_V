s1=input()
s2=input()
l=list(s1)
n=int(input())
for i in range(n,len(s1),n):
    l.insert(i,s2)
for i in l:
    print(i,end="")
