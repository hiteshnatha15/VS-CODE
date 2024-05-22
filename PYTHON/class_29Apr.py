# Function to add two numbers
def add_numbers(a, b):
    return a + b

# Test the function
num1 = 5
num2 = 10
result = add_numbers(num1, num2)
print("The sum of", num1, "and", num2, "is", result)

#subtract two numbers
def subtract_numbers(a, b):
    return a - b

# Test the functions
result1 = add_numbers(num1, num2)
result2 = subtract_numbers(num1, num2)
print("The sum of", num1, "and", num2, "is", result1)
print("The difference between", num1, "and", num2, "is", result2)

# Function to multiply two numbers
def multiply_numbers(a, b):
    return a * b

# Test the functions
result1 = add_numbers(num1, num2)
result2 = subtract_numbers(num1, num2)
result3 = multiply_numbers(num1, num2)
print("The sum of", num1, "and", num2, "is", result1)
print("The difference between", num1, "and", num2, "is", result2)
print("The product of", num1, "and", num2, "is", result3)

# Function to divide two numbers
def divide_numbers(a, b):
    return a / b

# Test the functions
result4= divide_numbers(num1, num2)
print("The division of", num1, "and", num2, "is", result4)
# Function to convert a number into words
def number_to_words(num):
    ones = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
    tens = ['ten', 'twenty', 'thirty', 'forty', 'fifty', 'sixty', 'seventy', 'eighty', 'ninety']
    teens = ['eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen', 'sixteen', 'seventeen', 'eighteen', 'nineteen']

    if num == 0:
        return ones[0]
    elif num < 10:
        return ones[num]
    elif num < 20:
        return teens[num - 11]
    elif num < 100:
        tens_digit = num // 10
        ones_digit = num % 10
        if ones_digit == 0:
            return tens[tens_digit - 1]
        else:
            return tens[tens_digit - 1] + '-' + ones[ones_digit]
    else:
        return 'Number out of range'

# Test the function
num1 = 5
num2 = 10

result1 = number_to_words(num1)
result2 = number_to_words(num2)

print("The word representation of", num1, "is", result1)
print("The word representation of", num2, "is", result2)
number_to_words

