def average_followers(nums):
    if not nums:
        return None
    num_sum = 0
    num_values = 0
    for num in nums:
        num_sum += num
        num_values += 1
        
    return num_sum / num_values    
