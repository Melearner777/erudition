num1 = int(input("enter number:"))
num2 = int(input("enter number:"))

operator =input("enter operator:")

match operator:
    case"+":
        print("sum is",num1+num2)
    case"-":
        print("subtraction is",num1-num2)
    case"*":
        print("multiplication is",num1*num2)
    case"/":
        print("division is",num1/num2)
    case"_":
        print("print valid number")    

