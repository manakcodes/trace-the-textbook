'''
============================================================================
============================================================================
QUESTION : 003

Write a program that determines whether an alphabet, digit or a whitespace
was entered.
============================================================================
============================================================================
'''


if __name__ == '__main__':

    # input something from the user
    x = input("enter something : \t")

    # check if the user input is an alphabet
    if (x.isalpha()):
        print("user entered an alphabet -> user entered {" + str(x) + "}")

    # check if the user input is a digit
    elif (x.isdigit()):
        print("user entered a digit -> user entered {" + str(x) + "}")

    # check if the user input is a whitespace
    elif (x.isspace()):
        print("user entered a whitespace -> user entered {" + str(x) + "}")

    # else print INVALID INPUT
    else:
        print(f"INVALID INPUT !!")