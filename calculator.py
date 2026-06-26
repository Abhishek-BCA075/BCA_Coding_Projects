# python program create  a simple calculator

#step:- 1. function to add two number
def add(number1, number2):
   return number1 + number2

#step:-  function to subtract two number
def sub(number1, number2):
   return number1 - number2

#step:-  function to multiply two number
def mutiplication(number1, number2):
   return number1 * number2

#step:-  function to divide two number
def divide(number1, number2):
   return number1 / number2

#step:-  function to average or min  two number
def avg(number1, number2):
   return (number1 + number2)/2

#STEP:- 2. user input

print("pease select an  operation:\n"
        "1. Addition\n"
          "2. subtraction\n"
           "3. mutiplication\n"
             "4. division\n"
               "5. average\n" )

select = int(input("seect a operation from 1,2,3,4,5:"))
number1 = int(input("enter first number:"))
number2 = int(input("enter second number:"))

#STEP:- 3. print the result

if select == 1:
    print(number1, "+", number2, " = " ,  add(number1, number2))

elif select == 2:
    print(number1, "-" , number2, "=",  sub(number1, number2))

elif select == 3:
    print(number1, "*" , number2, "=",  mutiplication(number1, number2))

elif select == 4:
    print(number1, "/" , number2, "=",  divide(number1, number2))

elif select == 5:
    print("(",number1, "+" , number2,")","/", "2", "=",  avg(number1, number2))    

else:
    print("invalid operation! pls select again!")
    
       







  
  