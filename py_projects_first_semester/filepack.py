def avgfunc():
    filex=open("sunum.txt","r")
    for line in filex:
        total=0
        line =line.strip().split(",")
        name=line[0]
        gradenum=len(line)-1
        if gradenum>=5:
            for i in range(1,gradenum+1):
                total= total+int(line[i])
            avg=total/gradenum
            print(f"Name: {name}\nAverage of grades: {avg}")
        else:
            print (f"Name : {name}\nyou dont have enough grades.")
avgfunc()
        