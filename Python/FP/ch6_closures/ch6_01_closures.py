def word_count_aggregator():
    count = 0
    def inner_f(doc):
        nonlocal count
        words = doc.split(' ')
        for word in words:
            count +=1
        return count
    return inner_f
        