


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

ent=int(input("enter the number you want to convert that to binary number:"))
print(bin(ent))