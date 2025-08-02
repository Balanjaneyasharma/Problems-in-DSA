def toString(List):
    return ''.join(List)
def myRecursion (string, data, last, index):
    length = len(string)
    for i in range(length):
        data[index] = string[i]
        if index==last:
            print (toString(data))
        else:
          myRecursion(string, data, last, index+1)
def Lexic(string):
    length = len(string)
    data = [""] * (length+1)
    string = sorted(string)
    myRecursion(string, data, length-1, 0)
 




S=input()
Lexic(S)
