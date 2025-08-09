'''
============================================================================
============================================================================
QUESTION : 002

Write a program that prompts the user to enter a character (O, A, B, C, F). Then using if-elif-else construct display Outstanding, Very Good, Good
Average and Fail respectively.
============================================================================
============================================================================
'''


# input a number from the user
x = input("enter a character (O, A, B, C, F) : \t")

# print for 'O'
if (x == 'O'):
    print("outstanding")

# print for 'A'
elif (x == 'A'):
    print("very good")

# print for 'B'
elif (x == 'B'):
    print("good")

# print for 'C'
elif (x == 'C'):
    print("average")

# print for 'F'
elif (x == 'F'):
    print("fail")

# print for invalid input
else:
    print("INVALID INPUT !!")