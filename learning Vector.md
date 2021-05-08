# What is Vector in C++?

Vectors in C++ are the dynamic arrays that are used to store data. Unlike arrays, which are used to store sequential data and are static in nature, Vectors provide more flexibility to the program. Vectors can resize itself automatically when an element is inserted or deleted depending on the need of the task to be executed. It is not the same in an array where only a given number of values can be stored under a single variable name.

----------

## Vectors-in-c++

    Is vector ordered in C++?

No vectors are not ordered in C++. Vector elements are placed in adjacent storage so that they can be accessed and travel across using iterators. In vectors, data is inserted at the end of it. Inserting an element at the end takes differential time, as sometimes there may be a need of extending the vector. Removing the last element takes only constant time because no resizing occurs. Inserting and erasing at the beginning or in the middle of the vector is linear in time.

    How are vectors stored in C++?
>To create a vector, you need to follow the below given syntax.
Syntax:
vector< object_type > variable_name;

Example:

```c
#include <vector>
int main()
{
    std::vector<int> my_vector;
}
```

In the above example, a blank vector is being created. Vector is a dynamic array and, doesn’t needs size declaration.

Member Functions of Vectors in C++
A Vector container in STL provides us with various useful functions.

1) Modifiers
2) Iterators
3) Capacity

----------
    Modifer

> push_back(): The function pushes the elements into a vector from the back. If the type of object passed as a parameter in the push_back() is not same as that of the vector an exception is thrown.  
assign(): It assigns a new value to the vector elements by replacing old ones.
pop_back(): The pop_back() function is used to pop or remove elements from a vector from the back. It reduces the size of the vector by one element.
insert(): This function inserts new elements before the element before the position pointed by the iterator. We can also pass a third argument count, that counts the number of times the element is to be inserted before the pointed position.
erase(): erase() function is used to remove elements from a container from the specified position or range. We can either pass the position of the specific elements needs need to remove or we can pass the starting point and endpoint of a range of elements.
swap(): swap() function is used to swap the contents of one vector with another vector of the same type. Sizes may differ.
clear(): clear() function is used to remove all the elements of the vector container

## Iterators

>begin(): This function returns an iterator pointing to the first element in the vector.
>end(): The end() function returns an iterator pointing to the last element in the vector.
