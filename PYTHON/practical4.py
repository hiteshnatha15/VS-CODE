def verify_data(input_data):
    if input_data.replace(" ", "").isalpha():
        return True
    else:
        return False

def welcome_message(name):
    print(f"Welcome, {name}!")

user_input = input("Enter your name: ")

if verify_data(user_input):
    welcome_message(user_input)
else:
    print("Invalid input! Please enter only alphabets and spaces.")
