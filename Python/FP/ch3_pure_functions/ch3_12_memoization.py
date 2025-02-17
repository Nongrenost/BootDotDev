
def word_count_memo(document, memos):
    copy = memos.copy()
    if document in copy:
        return copy[document], copy
        
    copy[document] = word_count(document)
    return copy[document], copy
    


# Don't edit below this line


def word_count(document):
    count = len(document.split())
    return count