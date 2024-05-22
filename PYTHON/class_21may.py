# class University:
#     def IPR(self):
#         print("Information Process Resources")
#     def IT(self):
#         print("Department of Information Technology")
#     def EXAM(self):
#         print("Department of Examination")

# IIT=University()
# NIT=University()
# VIT=University()
# VIT.EXAM()

# Create a class that displays the basic functional units of any university present in india. All this class with various universities 
#available in india to display te working of various departments




# create a class for the vehicle. Every vehicle is having some unit in following points 
#1. total no of wheels 2. engine time , 
#3. engine no/chasis no, create the object for the class for two wheelers and three wheelers excute various functions with various objects

# class Vehicle:
#     def __init__(self, wheels, engine_type, engine_no):
#         self.wheels = wheels
#         self.engine_type = engine_type
#         self.engine_no = engine_no

# two_wheeler = Vehicle(2, "Petrol", "12345")
# three_wheeler = Vehicle(3, "Diesel", "67890")

# print(two_wheeler.wheels)
# print(three_wheeler.engine_type)

# create a class for mobiles every mobile is having some features like total number of cameras,processing speed ,
# recording facitlity. create a object of this class with samsung,oppo and apple and take features from user and display them

# class Mobile:
#     def __init__(self, brand):
#         self.brand = brand
#         self.num_cameras = 0
#         self.processing_speed = 0
#         self.recording_facility = False

#     def set_features(self, num_cameras, processing_speed, recording_facility):
#         self.num_cameras = num_cameras
#         self.processing_speed = processing_speed
#         self.recording_facility = recording_facility

#     def display_features(self):
#         print(f"Brand: {self.brand}")
#         print(f"Number of Cameras: {self.num_cameras}")
#         print(f"Processing Speed: {self.processing_speed}")
#         print(f"Recording Facility: {'Yes' if self.recording_facility else 'No'}")

# samsung = Mobile("Samsung")
# oppo = Mobile("Oppo")
# apple = Mobile("Apple")

# num_cameras = int(input("Enter the number of cameras for Samsung: "))
# processing_speed = float(input("Enter the processing speed for Samsung: "))
# recording_facility = input("Does Samsung have recording facility? (yes/no): ").lower() == "yes"
# samsung.set_features(num_cameras, processing_speed, recording_facility)

# num_cameras = int(input("Enter the number of cameras for Oppo: "))
# processing_speed = float(input("Enter the processing speed for Oppo: "))
# recording_facility = input("Does Oppo have recording facility? (yes/no): ").lower() == "yes"
# oppo.set_features(num_cameras, processing_speed, recording_facility)

# num_cameras = int(input("Enter the number of cameras for Apple: "))
# processing_speed = float(input("Enter the processing speed for Apple: "))
# recording_facility = input("Does Apple have recording facility? (yes/no): ").lower() == "yes"
# apple.set_features(num_cameras, processing_speed, recording_facility)

# samsung.display_features()
# oppo.display_features()
# apple.display_features()

# create a constant in class in python any constant value can be declared directly inside the class just like the normal variable.that connstant value can be called directly with the object of that class

# class Books:
#     book_code=101
# VIT_book_depo=Books()
# VIT_book_depo.book_code

#Create a clas library having two different sections in which one is MCA sections in which all code starts with MCA101 only three books are available in MCA sections that are java,python and c++ the another section is physics section where the code starts from PHY101 three books are available in physics section that are quantumn physics,thermodynamics and optics.ask the user which section he wants to visit and display all the books available in that section
class Library:
    def display_books(self, section):
        if section.lower() == "mca":
            mca_books = ["MCA101 - Java", "MCA101 - Python", "MCA101 - C++"]
            print("MCA Section:")
            for book in mca_books:
                print(book)
        elif section.lower() == "physics":
            physics_books = ["PHY101 - Quantum Physics", "PHY101 - Thermodynamics", "PHY101 - Optics"]
            print("Physics Section:")
            for book in physics_books:
                print(book)
        else:
            print("Invalid section!")
        
library = Library()
section = input("Which section do you want to visit? (MCA/Physics): ")
library.display_books(section)



privide 10 of interse with princial account  to input the date th ecjeck ths finaal amount of bothhh the bank a nd  provide the deision for minium amout