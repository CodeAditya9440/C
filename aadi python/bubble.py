def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        swapped = False
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = new_func()
        if not swapped:
            break 

def new_func():
    swapped = True
    return swapped 

arr = [64, 34, 25, 12, 22, 11, 90]
bubbleSort(arr)
print(arr)