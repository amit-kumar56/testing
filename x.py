ans=0
for i in range(1,8):
    temp=100
    for i in range(1,i+1):
        temp=temp*1.1
    ans=ans+temp
print(ans)
