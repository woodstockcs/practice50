# Document Distance

## Prerequisites
Loops

## Problem
One (naive) way to test for academic honesty is simply to check how similar two documents are: word-for-word, letter-for-letter. In the below, write a function of type <code>void</code> that takes in two strings, compares them, and prints: <strong>a</strong> the number of letters on which they differ, and <strong>b</strong> the locations of the letters at which the strings differ. Assume the strings are of the same length.

## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

void document_distance(string s1, string s2);

int main(void)
{
    string doc1 = "this is how James implimented the coad";
    string doc2 = "This is how Tania implemented The Code";

    document_distance(doc1, doc2);  
}

void document_distance(string s1, string s2)
{
	// TODO
}
```