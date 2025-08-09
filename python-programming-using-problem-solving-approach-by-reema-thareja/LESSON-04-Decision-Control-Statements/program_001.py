'''
============================================================================
============================================================================
QUESTION : 001

Write a program to input 2 numbers and check whether they are equal or not.
============================================================================
============================================================================
'''


if __name__ == '__main__':
    
    # input a number from the user
    x = int(input("enter first number : \t"))

    # input another number from the user
    y = int(input("enter second number : \t"))

    # check if the both the numbers are equal
    if (x == y):
        print(f"{x} and {y} both are equal")

    # check if the first number is greater
    elif (x > y):
        print(f"{x} is greater than {y}")

    # check if the second number is greater
    else:
        print(f"{y} is greater than {x}")
