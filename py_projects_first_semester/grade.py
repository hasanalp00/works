file=open("sunum.txt","r")
    for line in file:
        total=0
        line.strip.split()
        name=line[0]
        gradenum=len(line)-1
        if gradenum>=5:
            for i in range(1,gradenum):
                total+=line[i]
            avg=total/gradenum
            print(f"Name: {name}\nAverage of grades: {avg}")
        else:
            print ("you dont have enough grades.")