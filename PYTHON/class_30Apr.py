# # inline function in py are declared with teh help of lambda fnction.

# #lambda function
# #general function are declared with the help of def keyword,give them a name,and then add the list of arguments surrounded by roung parantheses.
# #there could be namy lines of code, with as many statements and expressions inside the functions

# #1.lambda functions are anonymous functions that can contain only one expresson.
# #2.lambda is considered as nameless function for a shorter period of time.
# #3.we can say a function with only one expression inside.

# #syntax:
# #lambda arguments:expression

# #4.lambda functions can have a number of arguments but only one expression.the expression is evaluated and returned.
# #5.the lambda function is defined where it is used,in this way there is not a named function in memory.
# #6.we can also return a lambda function from a function.

# sum_numbers = lambda x, y: x + y

# num1 = int(input("Enter the first number: "))
# is_even = lambda num: num % 2 == 0
# num2 = int(input("Enter the second number: "))
# result = sum_numbers(num1, num2)
# print("The sum of the two numbers is:", result)

# def display_square(num):
#     square = lambda x: x ** 2
#     result = square(num)
#     print("The square of", num, "is:", result)

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

prime_numbers = list(filter(is_prime, range(10, 21)))
print("Prime numbers between 10 and 20:", prime_numbers)


def display_square(num):
    square = lambda x: x ** 2
    result = square(num)
    print("The square of", num, "is:", result)

numbers = range(1, 16)
squared_numbers = list(map(display_square, numbers))



