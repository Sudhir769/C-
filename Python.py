# print("My First Program")

# # variables
# name ="Tony Stark"
# age = 30
# print("My name is ", name , "and I'm", age , "years old")

# input
# name = input("Enter Your Name")
# print(name, "is a good boy")

# # type conversion
# old_age= input("enter your old age")
# new_age = int(old_age) +2
# print("You are", new_age, "years old")

# number=18
# print(float(number))
# print(str(number))
# print(bool(number))

# sum of two numbers
# First=int(input("enter first number :"))
# Second=int(input("enter second number : "))
# sum= First + Second
# print("the sum is :" ,sum)

# # Strings
# name= "Sudhir Maurya"
# print(name)
# print(name.find('M'))
# print(name.find('hir'))
# print('u' in name)
# print(name.replace("Sudhir", "Patrick"))

# Arithmetic operators
# First=int(input("enter first number :"))
# Second=int(input("enter second number : "))
# sum=First + Second
# print("the sum is :" ,sum)

# difference = First - Second
# print("the difference is :" , difference)

# multiply= First*Second
# print("the multiply is :" ,multiply)

# divide=First/Second
# print("the divide is :" , divide)

# remainder= First%Second
# print("the remainder is :" ,remainder)


# if-else 
# age=int(input("Enter your age: "))
# if age < 18:
#     print("You are a child")
# elif age >= 18 and age < 25:
#     print("You are a teenager")
# elif age >= 25 and age < 30:
#     print("You are an adult")
# elif age >= 30 and age < 40:
#     print("You are a senior")
# else:
#     print("default statement")


# # define a function for each operation
# def add(x, y):
#     return x + y

# def subtract(x, y):
#     return x - y

# def multiply(x, y):
#     return x * y

# def divide(x, y):
#     return x / y

# # prompt the user to enter two numbers and the desired operation
# num1 = float(input("Enter first number: "))
# num2 = float(input("Enter second number: "))
# operation = input("Choose an operation (+, -, *, /): ")

# # perform the operation and print the result
# if operation == '+':
#     print(num1, "+", num2, "=", add(num1, num2))
# elif operation == '-':
#     print(num1, "-", num2, "=", subtract(num1, num2))
# elif operation == '*':
#     print(num1, "*", num2, "=", multiply(num1, num2))
# elif operation == '/':
#     if num2 == 0:
#         print("Error: division by zero")
#     else:
#         print(num1, "/", num2, "=", divide(num1, num2))
# else:
#     print("Invalid operation")

# Loops
# i=1
# while i<=10:
#     print("i =", i)
#     i=i+1

# i=1
# while i<=5:
#     print(i*"* ")
#     i=i+1

# for i in range(5):
#     print(i*"* ")

# # lists
# mylist = [1, 2, 3, 4, 5]
# print(mylist[0])
# print(mylist[1])
# print(mylist[-2])
# print(mylist[1:3])
# print(mylist)
# mylist.append(15)
# mylist.insert(4,0)

# print(15 in mylist)
# print(len(mylist))

# for i in mylist:
#     print(i)

# mylist.clear()

# # create a list of numbers
# numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# # loop through the list of numbers
# for num in numbers:
#     # skip the current number if it is even
#     if num % 2 == 0:
#         continue
    
#     # print the current number if it is odd and less than 5
#     if num < 5:
#         print(num)
#     # print the current number if it is odd and greater than 8
#     elif num > 8:
#         print(num)
#     # break out of the loop if the current number is 7
#     elif num == 7:
#         print("Breaking out of the loop...")
#         break
#     # print a message for all other odd numbers
#     else:
#         print("This is an odd number:", num)

# Tuple
# marks=(97,94, 92,94, 99,94)
# print(marks)
# print(marks.index(92))
# print(marks.count(94))

# # Set
# # create a set of colors
# colors = {"red", "blue", "green", "yellow", "orange"}

# # print the set
# print("Set of colors:", colors)

# # add a new color to the set
# colors.add("purple")
# print("Set with new color:", colors)

# # remove a color from the set
# colors.remove("green")
# print("Set with green removed:", colors)

# # check if a specific color is in the set
# is_red_in_set = "red" in colors
# print("Is red in the set?", is_red_in_set)

# # get the number of items in the set
# num_colors = len(colors)
# print("Number of colors in the set:", num_colors)

# # create another set of colors to perform set operations
# other_colors = {"blue", "yellow", "pink"}

# # find the union of the two sets
# union = colors.union(other_colors)
# print("Union of the two sets:", union)

# # find the intersection of the two sets
# intersection = colors.intersection(other_colors)
# print("Intersection of the two sets:", intersection)

# # find the difference between the two sets
# difference = colors.difference(other_colors)
# print("Difference between the two sets:", difference)


# # Dictionary
# # create a dictionary of student names and grades
# students = {"Alice": 90, "Bob": 85, "Charlie": 92, "Dave": 87, "Eve": 94}

# # print the dictionary
# print("Dictionary of students and grades:", students)

# # get the grade for a specific student
# alice_grade = students["Alice"]
# print("Alice's grade:", alice_grade)

# # update a grade for a specific student
# students["Bob"] = 88
# print("Updated dictionary:", students)

# # add a new student and grade to the dictionary
# students["Frank"] = 91
# print("Dictionary with new student:", students)

# # remove a student and their grade from the dictionary
# del students["Charlie"]
# print("Dictionary with Charlie removed:", students)

# # get the number of items in the dictionary
# num_students = len(students)
# print("Number of students in the dictionary:", num_students)

# # check if a specific student is in the dictionary
# is_alice_in_dict = "Alice" in students
# print("Is Alice in the dictionary?", is_alice_in_dict)

# # get a list of all keys in the dictionary
# keys = list(students.keys())
# print("Keys in the dictionary:", keys)

# # get a list of all values in the dictionary
# values = list(students.values())
# print("Values in the dictionary:", values)

# # Functions
# # define a function that calculates the area of a rectangle
# def area_of_rectangle(length, width):
#     area = length * width
#     return area

# # define a function that calculates the circumference of a circle
# def circumference_of_circle(radius):
#     pi = 3.14159
#     circumference = 2 * pi * radius
#     return circumference

# # define a function that calculates the volume of a cylinder
# def volume_of_cylinder(radius, height):
#     pi = 3.14159
#     base_area = pi * radius ** 2
#     volume = base_area * height
#     return volume

# # get input from user
# length = float(input("Enter the length of the rectangle: "))
# width = float(input("Enter the width of the rectangle: "))
# radius = float(input("Enter the radius of the circle: "))
# height = float(input("Enter the height of the cylinder: "))

# # calculate and print the area of the rectangle
# rectangle_area = area_of_rectangle(length, width)
# print("The area of the rectangle is:", rectangle_area)

# # calculate and print the circumference of the circle
# circle_circumference = circumference_of_circle(radius)
# print("The circumference of the circle is:", circle_circumference)

# # calculate and print the volume of the cylinder
# cylinder_volume = volume_of_cylinder(radius, height)
# print("The volume of the cylinder is:", cylinder_volume)

# define a function that checks if a number is even
def is_even(number):
    if number % 2 == 0:
        return True
    else:
        return False

# define a function that checks if a number is odd
def is_odd(number):
    if number % 2 != 0:
        return True
    else:
        return False

# define a function that calculates the factorial of a number
def factorial(number):
    if number == 0:
        return 1
    else:
        return number * factorial(number - 1)

# define a function that converts Celsius to Fahrenheit
def celsius_to_fahrenheit(celsius):
    fahrenheit = celsius * 9/5 + 32
    return fahrenheit

# define a function that calculates the nth Fibonacci number
def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)

# get input from user
number = int(input("Enter a number: "))
celsius = float(input("Enter a temperature in Celsius: "))
n = int(input("Enter a positive integer n: "))

# check if the number is even or odd
if is_even(number):
    print(number, "is even")
else:
    print(number, "is odd")

# calculate and print the factorial of the number
factorial_number = factorial(number)
print("The factorial of", number, "is", factorial_number)

# convert Celsius to Fahrenheit and print the result
fahrenheit = celsius_to_fahrenheit(celsius)
print(celsius, "degrees Celsius is equivalent to", fahrenheit, "degrees Fahrenheit")

# calculate and print the nth Fibonacci number
fibonacci_number = fibonacci(n)
print("The", n, "th Fibonacci number is", fibonacci_number)


