#58
#Program to check if duplicate value exists in an array.

def duplicate(array):
    check = {}  #Initializing dictionary
    for i in array:
        if check.get(i) == 1: #Here doing check[i] will raise error because of missing key, but using .get() method just returns None.
            return True
        else:
            check[i] = 1
    return False


ar1 = [1,2,3,4,2,5]
ar2 = [1,2,3,4,5,6]
print(f"Checking on array 1: {duplicate(ar1)}")
print(f"Checking on array 2: {duplicate(ar2)}")
