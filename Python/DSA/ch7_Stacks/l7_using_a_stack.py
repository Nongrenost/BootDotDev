from l7_stack import Stack


def is_balanced(input_str):
    balanced = False
    stack = Stack()
    
    stack.push(input_str[0])
    if stack.peek() == ")" or stack.peek() == "(" and len(input_str) == 1:
        return balanced
    
    for char_index in range(1, len(input_str)):
        if input_str[char_index] == ")" and stack.peek() == "(":
            stack.pop()
        else:
            stack.push(input_str[char_index])
    
    if stack.peek() is None:
        balanced = True
    return balanced