filename=input("enter filename : ");
pos=filename.find(".")
if (pos==-1):
    print("error")
else :
    print(filename[pos:])
