## Pig Latin
Pig latin is a made-up language formed by English. The rules for Pig Latin are if a word starts with a vowel, append 'way' to the end of the word. If a word starts with a consonant, move the consonant to the end of the word and append 'ay' to the end. If the word has a consonant cluster before the first word (i.e more than 1 consonant in the front), then move ALL the consonants to the end (in the same order) and append 'ay' to the end of the word.
Ex:
```
    'apple' => 'appleway'
    'Hello' => 'Ellohay'
    'smile' => 'ilesmay'

    'Hello World' => 'Ellohay Orldway'
```
## Enumerate All Primes To n (Enumerate_Primes)
Given a number n, return a set of all primes numbers up to n (with 0 and 1 being defined as not prime)
Ex: 
``` 
    input : 10
    output: {2,3,5,7}

    input : 20
    output: {2,3,5,7,11,13,17,19}
```
## Two Sum
Given an array of numbers and a target number, do a pair of numbers exists that add up to that number?
Ex:
```
    input: <1,2,3,4,5>, 7
    output: true

    input: <13,67,5,3,12>, 100
    output: false
```
## Remove a value from a Linked List
Given the head of a linked list, delete all nodes whose value is equal to a target
Ex:
```
    input: ->2->3->4->5->/, 3
    resulting list: ->2->4->5->/

    input ->4->4->4->5->/, 4
    reulsting list: ->5->/

```

## Weave two linked list together
Given the head of two linked list, return a reference to the head of a linked list whose nodes are the weaved values from the two input linked list
Ex:
```
    input: ->1->2->3->4->/, ->10->11->12->13->/
    output: ->1->10->2->11->3->12->4->13->/

    input: ->1->2->/, ->12->13->14->15->16->/
    output: ->1->12->2->13->14->15->16->/

    input: ->1->2->3->4->5->6->/, ->10->11->/
    output: ->1->10->2->11->3->4->5->6->/

```

## Triple Sum
Given an array of numbers and a target number, do a trio of numbers exists that add up to that number?
Ex:
```
input: <1,2,3,4,5,6>, 12
output: True

input: <13,8,22,9,7,10>, 100
output: False

```

## Kth Smallest
Given an array of numbers and a value k where k is smaller than the size of the array. Return the Kth smallest element
Ex:
```
input: <4,3,7,10,19>, 3
output: 7

input: <5,1,6,2,7,100,101>, 6
output: 100
```

## String is a Palindrome
Given a string, determine if it is a palindrome
Ex:
```
input: "abcba"
output: true

input: "abcde"
output: false
```

## Carry-Less Addition
Carryless addition, denoted by ⊕, is the same as normal addition, except any carries are ignored (in base 10). Ex:
```
37 ⊕ 48 = 75, not 85.
```

## Integer is a Palindrome
Given a positive integer, determine if it is a palindrome
Ex:
```
input: 12321
output: True

input: 123456
output: false
```

## Longest Common Subsequence
Given 2 strings, find the length of the longest common subsequence between the two.
Ex:
```
input: "ABCDGH", "AEDFHR"
output: 4
```

## Valid Parentheses
Given a string of parentheses, output if the string is a valid set of parenthese or not
Ex:
```
input: "()"
output: 1

input: "()))"
output: 0
```

## Reverse Polish Notation
Given a string that is a arithmetic equation that is in Reverse Polish Notation. Compute the result. 
Ex:
```
input: "4 3 + "
output: 7
```

## Compute Binary Nodes in Order of Increasing Depth
Given the root to a Binary Tree, return an array where each index of the array corresponds to a level of of the tree.
Ex:
```
input:
            1
           / \
          2   3
         / \ / \
        4  5 6  7
output: [[1],[2,3],[4,5,6,7]]

```
## Opposites
Given an array, return an array consisting of elements where the negative value of the element does not exists in te array.
Ex:
```
input: [6,2,4,5,-6,-7,-4]
output: [2,5,-7]
```

## Fibonacci 
Write a function that computes the nth Fibbonacci number in the Fibbonacci sequence.
Ex.
```
input: 0
output: 0

input: 9
output: 34
```

## Intersect Sorted Array
Given two sorted arrays, return the index where two arrays intersect.
Ex.
```
input: [0,1,2,3,4,5], [5,6,7,8,9]
ouput: [5]
```

## Reconstruct Binary Search Tree
Given data from a Pre-Order traversal of a Binary Search Tree, reconstruct the Binary Search Tree.
Ex.
```
input: "1,2,3"
ouput:   1
        / \
       2   3
```

## Number Of Traversals in an Array
Given a matrix and two points representing an index in the matrix, return the number of possible traversals to that point. 

Restriction: Traversals through a matrix must NOT include paths that turn left or go up. I.e The only valid moves are: Right and Down

Ex.
```
input: [[1,2,3],  , 1, 1
        [4,5,6],
        [7,8,9]] 
output: 2
```

