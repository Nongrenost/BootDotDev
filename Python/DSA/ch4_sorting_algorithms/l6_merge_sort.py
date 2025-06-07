def merge_sort(nums):
    if len(nums) < 2:
        return nums
    start = 0
    median = len(nums) // 2
    first = merge_sort(nums[start:median])
    second = merge_sort(nums[median:len(nums)])
    
    return merge(first, second)
       

def merge(first, second):
    final = []
    i = 0
    j = 0
    looping = True
    while (looping):        
        if i >= (len(first)) or j >= len(second):
            looping = False
            continue
        if first[i] <= second[j]:
            final.append(first[i])
            i+=1
        else:
            final.append(second[j])
            j+=1
    
    if i >= len(first):
        return final + second[j:]
    if j >= len(second):
        return final + first[i:]        