def zipmap(keys, values):
    if not keys or not values:
        return {}
    
    result_dict = zipmap(keys[1:], values[1:])
    result_dict[keys[0]] = values[0]
    return result_dict
