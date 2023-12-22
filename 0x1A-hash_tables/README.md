0x1A. C - Hash tables

In this project, I learn about hash functions and how to implement them.

Learning Objective

    What is a hash function

    What makes a good hash function

    What is a hash table, how do they work and how to use them

    What is a collision and what are the main ways of dealing with collisions in the context of a hash table

    What are the advantages and drawbacks of using hash tables

    What are the most common use cases of hash tables


0. >>> ht = {}

a function that creates a hash table.


1. djb2

1-djb2.c: hash function implementing the djb2 algorithm.


2. key -> index

a function that gives you the index of a key.


3. >>> ht['betty'] = 'cool'

a function that adds an element to the hash table.


4. >>> ht['betty']

a function that retrieves a value associated with a key.


5. >>> print(ht)

a function that prints a hash table.


6. >>> del ht

a function that deletes a hash table.
