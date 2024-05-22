#present in a group of data.  the filter function can works as conditional statements for a group of data

#to execute the filter function properly we requires a loop statement . the filter function is different from the map function  because the map function is used to apply a function to a group of data and the filter function is used to filter the data based on the condition.


# def is_eligible(age):
#     return age >= 18

# ages = [20, 17, 22, 16, 19]

# eligible_students = list(filter(is_eligible, ages))
# print("Eligible students for voting:", eligible_students)


# def is_eligible(age):
#     return age >= 18

# # Create a list of ages
# ages = [20, 17, 22, 16, 19]

# # Use the filter function to filter the ages based on the is_eligible function
# eligible_students = list(filter(is_eligible, ages))

# Print the eligible students


# def is_even(number):
#     return number % 2 == 0

# # Create a list of numbers from 1 to 50
# numbers = list(range(1, 51))

# # Use the filter function to filter the numbers based on the is_even function
# even_numbers = list(filter(is_even, numbers))

# # Print the even numbers
# print("Even numbers between 1 and 50:", even_numbers)


# def is_vowel(char):
#     vowels = ['a', 'e', 'i', 'o', 'u']
#     return char.lower() in vowels

# paragraph = "This is a sample paragraph.Is there any vowel in this paragraph? Let's find out. lorem ipsum dolor sit amet.lorem ipsum dolor sit amet. lorem"
# vowels = list(filter(is_vowel, paragraph))
# print("Vowels in the paragraph:", vowels)

    vowels = ['a', 'e', 'i', 'o', 'u']
    vowels[::-1]

