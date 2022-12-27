void max_heapify (int Arr[ ], int i, int N)
    {
        int left = 2*i                   //left child
        int right = 2*i +1           //right child
        if(left<= N and Arr[left] > Arr[i] )
              largest = left;
        else
             largest = i;
        if(right <= N and Arr[right] > Arr[largest] )
            largest = right;
        if(largest != i )
        {
            swap (Arr[i] , Arr[largest]);
            max_heapify (Arr, largest,N);
        } 
     }
     
     
     
     
     
     
     
     Building MAX HEAP:

Now let’s say we have  elements stored in the array  indexed from  to . They are currently not following the property of max heap. So we can use max-heapify function to make a max heap out of the array.

How?

From the above property we observed that elements from  to  are leaf nodes, and each node is a 1 element heap. We can use max_heapify function in a bottom up manner on remaining nodes, so that we can cover each node of tree.

void build_maxheap (int Arr[ ])
    {
        for(int i = N/2 ; i >= 1 ; i-- )
        {
            max_heapify (Arr, i) ;
        }
    }
    
    
    
    Min Heap: In this type of heap, the value of parent node will always be less than or equal to the value of child node across the tree and the node with lowest value will be the root node of tree.

enter image description here

As you can see in the above diagram, each node has a value smaller than the value of their children.
We can perform same operations as performed in building max_heap.
First we will make function which can maintain the min heap property, if some element is violating it.

  void min_heapify (int Arr[ ] , int i, int N)
    {
    int left  = 2*i;
    int right = 2*i+1;
    int smallest;
    if(left <= N and Arr[left] < Arr[ i ] )
         smallest = left;
    else
        smallest = i;
    if(right <= N and Arr[right] < Arr[smallest] )
        smallest = right;
    if(smallest != i)
    {
        swap (Arr[ i ], Arr[ smallest ]);
        min_heapify (Arr, smallest,N);
    } 
    }
    
    
    
    
 ////HEAP SORT
 
 void heap_sort(int Arr[ ])
    {
        int heap_size = N;
        build_maxheap(Arr);
        for(int i = N; i>=2 ; i-- )
        {
            swap(Arr[ 1 ], Arr[ i ]);
            heap_size = heap_size-1;
            max_heapify(Arr, 1, heap_size);
        }
    }
 
    
    
    
