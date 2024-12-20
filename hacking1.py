import random
import os
"""
num1=int(input("ent:"))
newnum=num1
binnum=0

for i in range(num1,-1,-1):
    while newnum>0 and newnum>=2**i:
        newnum=newnum-2**i
        binnum+=10**i
print(binnum)
"""
def bin_num(a):
    newnum=a
    binnum=0

    for i in range(a,-1,-1):
        while newnum>0 and newnum>=2**i:
            newnum=newnum-2**i
            binnum+=10**i
    return(binnum)
os.system("color 3")
for j in range(1500):
    ent=random.randrange(0,3)
    print(bin_num(ent),end="")
input()