'''
============================================================================
============================================================================
QUESTION : 005

Write a program that counts the number of lowercase characters, uppercase
characters, and digits entered by the user
============================================================================
============================================================================
'''


if __name__ == '__main__':
    
    # input something from the user
    x = input("enter something : ")

    # init a var to 0 to count the number of lowercase chars
    lowercase_count = 0

    # init a var to 0 to count the number of uppercase chars
    uppercase_count = 0

    # init a var to 0 to count the number of digits
    digit_count = 0


    for i in x:

        # increment the lowercase count by 1 every time a lower case occurs
        if (i.islower()):
            lowercase_count += 1

        # increment the uppercase count by 1 every time a upper case occurs
        if (i.isupper()):
            uppercase_count += 1
        
        # increment the digit count by 1 every time a digit occurs
        if (i.isdigit()):
            digit_count += 1

    # print all the details
    print(f"user entered     :\t{x}")
    print(f"lower case count :\t{lowercase_count}")
    print(f"upper case count :\t{uppercase_count}")
    print(f"digit count      :\t{digit_count}")