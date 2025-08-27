import random
def printvalues(a,b,c):
    anumlist=[]
    atotal=0
    bnumlist=[]
    cnumlist=[]
    for i in range(75-55+1):
        atotal+=(random.randint(55,75))
    for j in range(69-44+1):
        bnumlist.append(random.randint(44,69))
    for k in range(97-13+1):
        cnumlist.append(random.randint(13,97))
    groups={
            a: f"average of {a} values: {atotal/(75-55+1)}\n",
            b: f"values of {b}: {bnumlist}\n",
            c: f"values of {c}: {cnumlist}"
        }
    print (groups[a],groups[b],groups[c])
printvalues(34,23,67)