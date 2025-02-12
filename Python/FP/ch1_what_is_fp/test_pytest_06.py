from ch1_06_its_math import *

def test_is_even():
    assert is_even(2) is True 
    assert is_even(3) is False
    assert is_even(0) is True
    
def test_get_middle_number():
    assert get_middle_number([1, 3, 5]) == 3
    assert get_middle_number([5, 7, 8, 10]) == 7
    
def test_is_even_list():
    assert is_even_list([1, 2, 3]) is False
    assert is_even_list([10, 8, 7, 5]) is True

