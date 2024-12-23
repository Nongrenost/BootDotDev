def join_strings(strings):
    result = ""
    for str in strings:
        if result == "":
            result = str
        else:
            result = f"{result},{str}"
    return result


