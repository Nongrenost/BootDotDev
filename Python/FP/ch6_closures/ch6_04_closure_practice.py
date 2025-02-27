def new_collection(initial_docs):
    inner = initial_docs.copy()
    def inner_f(s):
        inner.append(s)
        return inner
    return inner_f