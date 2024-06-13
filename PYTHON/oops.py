# create a  class for mobiles, every mobile is having some features: like - 
# total number of cameras, processing speed, recording facility, create the object of this mobile class with samsung, oppo, apple;
# take the features from users for each object and display them.

class Mobile:
    def __inti__(self,camera,processor,recording):
        self.camera=camera
        self.processor=processor
        self.recording=recording
    def display(self):
        print("Camera:",self.camera)
        print("Processor:",self.processor)
        print("Recording:",self.recording)

samsung=Mobile()
oppo=Mobile()
apple=Mobile()
samsung.camera=input("Enter the number of cameras in Samsung:")
samsung.processor=input("Enter the processor of Samsung:")
samsung.recording=input("Enter the recording facility of Samsung:")
oppo.camera=input("Enter the number of cameras in Oppo:")
oppo.processor=input("Enter the processor of Oppo:")
oppo.recording=input("Enter the recording facility of Oppo:")
apple.camera=input("Enter the number of cameras in Apple:")
apple.processor=input("Enter the processor of Apple:")
apple.recording=input("Enter the recording facility of Apple:")
samsung.display()
oppo.display()
apple.display()