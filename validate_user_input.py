userinput = input('enter a number : ')
try:
    val = int(userinput)
except:
    val = -1
if val >= 0:
    print('you entered correct number')
else:
    print('this is not a number')   # this code validate user input
                                    # if user enetr string it shows not a number instead of error


a = input('ehfmjh')
b = 0
try:
    b = int(a)
except:
    b = -1 # this code print nothing
    print('this is not a number')


