Queues are data structures that follow the First In First Out (FIFO) i.e. the first element that is added to the queue is the first one to be removed.

Elements are always added to the back and removed from the front. Think of it as a line of people waiting for a bus. The person who is at the beginning of the line is the first one to enter the bus.

Variables used

: Array in which queue is simulated
: Maximum number of elements that can be stored in a 
: Points at the index where the next deletion will be performed
: Points at the index where the next insertion will be performed
Functions supported

Queues support the following fundamental functions:

Enqueue

If the queue is not full, this function adds an element to the back of the queue, else it prints “OverFlow”.



void enqueue(int queue[], int element, int& rear, int arraySize) {
    if(rear == arraySize)            // Queue is full
            printf(“OverFlow\n”);
    else{
         queue[rear] = element;    // Add the element to the back
         rear++;
    }
}


///////////////////Dequeue

If the queue is not empty, this function removes the element from the front of the queue, else it prints “UnderFlow”.

void dequeue(int queue[], int& front, int rear) {
    if(front == rear)            // Queue is empty
        printf(“UnderFlow\n”);
    else {
        queue[front] = 0;        // Delete the front element
        front++;
    }
}



//////////////////////Front

This function returns the front element of the queue.

int Front(int queue[], int front) {
    return queue[front];
}
Support functions





/////////////////Size

This function returns the size of a queue or the number of elements in a queue.

int size(int front, int rear) {
    return (rear - front);
}






////////////////IsEmpty

If a queue is empty, this function returns 'true', else it returns 'false'.

bool isEmpty(int front, int rear) {
    return (front == rear);
}

