## Implementation 
A graph is stored as a set of adjacency lists or an adjacency matrix where each node is represented by an index. The value of each node is stored within an array. The node index corresponds to its index within the array.      

### Invariants
1. The size of the array and the number of lists should be equal
2. No index should be larger than N-1, where N is the size of the array.
3. Node index needs to be the same as array index.

## Error handling
Errors should be caught during compile time with static assertions or with exceptions. 

## Operations
* Retrieve edge count
* Retrieve node count
* Retrieve node given its index
* Check if an edge exists from a node to another
* Check if a node has any edges
* Breadth-first search
* Depth-first search

### Retrieve edge count
Iterate through all lists and sum the size of all lists.

### Retrieve node count
Get the size of the internal array that stores the value of all nodes. 

### Retrieve node given its index
Use array indexing on the array which stores values of nodes. 

