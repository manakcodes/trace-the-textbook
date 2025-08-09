'''
============================================================================
============================================================================
QUESTION : 004

Write a program that determines whether a digit, uppercase or a lowercase
character was entered.
============================================================================
============================================================================
'''


if __name__ == '__main__':
    # input a character from the user
    x = input("enter a character : \t")


    # check if the user input is a digit
    if (x.isdigit()):
        print(f"user entered a digit -> user entered {x}")

    # check if the user input is lowercase
    elif (x.isupper()):
        print(f"user entered a uppercase -> user entered {x}")

    # check if the user input is lowercase
    elif (x.islower()):
        print(f"user entered a lowercase -> user entered {x}")

    # else print INVALID INPUT
    else:
        print("INVALID INPUT")