# write a proram to create a file that can write your name and registration number. 
# close that file and then after reopen it to append the name of various courses thet you are learning now. 
# that after close the file and check the status whether the file is open or closed.

f=open("a.txt","w+")
f.write("Name: Hitesh Natha\n")
f.write("Reg. No.: 23MCA10099\n")
f.close()
f=open("a.txt","a+")
f.write("Courses: Python\n")
f.write("Courses: Java\n")
f.write("Courses: C++\n")
f.write("Courses: C\n")
f.close()
f=open("a.txt","r")
data=f.read()
f.close()
print(data)
print(f.closed)