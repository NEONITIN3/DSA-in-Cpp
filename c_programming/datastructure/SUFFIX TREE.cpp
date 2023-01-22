Pre-requisite : Trie

Suffix tree is a compressed trie of all the suffixes of a given string. Suffix trees help in solving a lot of string related problems like pattern matching, finding distinct substrings in a given string, finding longest palindrome etc. In this tutorial following points will be covered:

Compressed Trie
Suffix Tree Construction (Brute Force)
Brief description of Ukkonen's Algorithm

Before going to suffix tree, let's first try to understand what a compressed trie is.
Consider the following set of strings: {'BANANA''NABD','AABAB' }
A standard trie for the above set of strings will look like:
	
	
	he pseudo code for the brute force approach is given below:

function insert(T, string, start_index, length){
    i = start_index
    while(i < length)
        if T.arr[string[i]]) is NULL
            T.arr[string[i]] = new node()
            T = T.arr[string[i]]
            while(i < length)
                T.label = T.label+string[i]
                i = i+1
            endwhile
            return 
        endif

        j=0, x=i
        temp = T.arr[string[i]]
        while j < temp.label.length and i < length && temp.label[j] = string[i]
            i = i+1
            j = j+1
        endwhile

        if i = length 
            return
        endif

        if j = temp.label.length
            cnt = 0
            for k = 'a' to 'z'
                if temp.arr[k] = NULL
                    cnt = cnt+1
                endif
            endfor
            if cnt = 27
                while i < length
                    temp.label = temp.label + string[i]
                    i = i+1 
                endwhile
            else
                T = temp
            endifelse       
        else
            newInternalNode = new node()    
            k=0
            while k < j 
                newInternalNode.label = newInternalNode.label + temp.label[k]
                k = k+1
            endwhile
            newInternalNode.arr[string[j]] = new node()
            while k < temp.label.length 
                newInternalNode.arr[string[j]].label+=temp.label[k]
                k = k+1
            endwhile
            for k = 'a' to 'z'
                newInternalNode.arr[string[j]].arr[k] = temp.arr[k]
            endfor
            T.arr[string[x]] = newInternalNode  
            T = T.arr[string[x]]
        endifelse
    endwhile
}

function makeSuffixTree(string, length){
    Trie T
        string = concatenate(string, "{")
    for i = 0 to length
        insertInTrie(T, string, i, length)
}
