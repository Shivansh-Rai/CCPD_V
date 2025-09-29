n=int(input())
a=list(map(input().split()))
high=0
for i in a:
    for j in i:
        if ord(j)>high:
            high=ord(j)
print(high)