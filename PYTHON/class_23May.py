f = open("a.txt", 'w')
f.write("Name: HITESH NATHA\n")
f.write("Registration Number: 23MCA10099\n")
f.close()

f = open("a.txt", 'a')
f.write("Courses: Python, Java, C++\n")
f.close()

if f.closed:
    print("File is closed")
else:
    print("File is open")