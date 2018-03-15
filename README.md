# Cryptography-Project #
-------------------
#### C++ Project to encrypt test files using a 3 x 3 matrix key (Based on the Hill Cipher) 
----
## Collaborators
* Raj Joshi
* Andrew Silvestri
* Garret Seo
-------------------
## About 

This is a user-friendly, math-intensive program aimed at implementing the principles of the Hill Cipher in C++ code. 

## Method of Encryption/Decryption:
As stated above, SecroCryptr uses the Hill Cipher, which involves assigning each letter in the alphabet (other characters are
not supported) a numerical value and multiplying the characters in groups of 3 with a 3x3 matrix of randomly generated numbers. 
To fully understand the encryption/decryption method, visit https://www.wikipedia.org/wiki/Hill_cipher

## Matrix Key Generation
In order to find a integer matrix of a randomly generated matrix, the determinant must be (-1) or (+1). In order to make the code more efficiant, a unimodular matrix was created since a unimodular matrix will always have a determinant of +-1. For more information, visit http://mathworld.wolfram.com/UnimodularMatrix.html
