arr = [4,3,1,2]
writes = 0
n = len(arr)

for cycleStart in range(0, n - 1):
    item = arr[cycleStart]

    pos = cycleStart
    for i in range(cycleStart + 1, n):
        if arr[i] < item:
            pos += 1

    if pos == cycleStart:
        continue
    
    while item == arr[pos]:
        pos += 1
    arr[pos], item = item, arr[pos]
    writes += 1

    while pos != cycleStart:
        
        pos = cycleStart
        for i in range(cycleStart + 1, n):
            if arr[i] < item:
                pos += 1

        while item == arr[pos]:
            pos += 1
        arr[pos], item = item, arr[pos]
        writes += 1

print("After sort : ")
for i in range(n):
    print(arr[i], end=' ')