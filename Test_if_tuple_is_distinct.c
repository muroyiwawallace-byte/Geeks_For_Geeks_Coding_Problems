#User function Template for python3
arr = tuple(map(int, input().split()))

########### Write your code below ###############
# Print "True" if all elements of tuple are different, otherwise print "False"

########### Write your code above ###############
for i in arr:
    if(arr[i]==arr[i+1]):
        print("True")
    else:
        print("False")
