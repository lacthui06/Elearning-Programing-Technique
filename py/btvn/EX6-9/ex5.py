# Write a Python program to combine two lists into a dictionary. 
# The elements of the first one serve as keys and the elements of the second one serve as values.
# Each item in the first list must be unique and hashable.
keys = ['a','b','c','d','e']
values = [1, 2, 3, 4, 5]
def combine_lists_to_dict(keys, values):
    return dict(zip(keys,values))
combined_dict = combine_lists_to_dict(keys, values)
print(combined_dict)