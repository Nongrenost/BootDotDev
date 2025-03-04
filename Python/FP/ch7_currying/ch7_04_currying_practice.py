from functools import reduce

def lines_with_sequence(char):
    def with_char(length):
        sequence = char * length
        def with_length(doc):
            lines = doc.split("\n")
            return reduce(
                lambda count, line: count + (1 if sequence in line else 0),
            lines, 0)
        return with_length
    return with_char

