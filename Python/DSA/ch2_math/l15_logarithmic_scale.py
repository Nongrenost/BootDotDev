import math
def log_scale(data, base):
    result = []
    for data_point in data:
        result.append(math.log(data_point, base))
    return result