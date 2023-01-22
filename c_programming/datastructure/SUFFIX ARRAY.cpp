Motivation Problem: Given a string , find the longest sub string that occurs at least  times.

Brute Force method: For every sub string  of , one can find all the occurrences of  in  by .  takes  time, so the total time for this brute force method will be .

A faster solution using hashing: We can binary search the length of the sub string. For a current length  in the binary search, hash of every sub string of length  can be found in  time. While doing this, the hashes can be stored in a dictionary, and when all sub strings of length  are processed, the hash with maximum frequency is to be checked if it has frequency greater than equal to . This takes  time, where a log term comes due to maintaining the dictionary(map in C++).

A solution using Suffix Array:

A Suffix Array is a sorted array of suffixes of a string. Only the indices of suffixes are stored in the string instead of whole strings. For example: Suffix Array of "banana" would look like this:
	
	
	//SUFFIX ARRAY CODE
	
	Here is some pseudo code to construct suffix array.

SA = [] // Suffix Array

P = [][] // P[i][j] denotes rank of suffix at position 'j' when all suffixes are sorted by their first '2^i' characters

str = [] // initial string, 1 based indexing

POWER = [] //array of powers of 2, POWER[i] denotes 2^i

tuple {
    first, second, index;
}

L = [] // Array of Tuples

N = length of str

for i = 1 to N:
    P[0][i] = str[i] - 'a' // Give initial rank when suffixes are sorted by their first 2^0 = 1 character.

step = 1

for i = 1; POWER[i-1]<N; i++, step++:
    for j = 1 to N:
        L[j].index = j
        L[j].first = P[i-1][j]
        L[j].second = (j+POWER[i-1]<=n ? P[i-1][j+POWER[i-1]] : -1)

    sort(L)

    for j = 1 to N:
        P[i][L[j].index] = ((j>1 and L[j].first==L[j-1].first and L[j].second==L[j-1].second) ? P[i][L[j-1].index] : j) 
        /*Assign same rank to suffixes which have same number in the first and second fields of their respective tuples.*/

step = step - 1
Now at the  row of matrix , we have the ranks of all suffixes. Now we can get the suffix array very easily in .

for i = 1 to N:
    SA[P[step][i]] = i
