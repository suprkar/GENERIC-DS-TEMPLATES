
# Union Find
## What is a union find data structure?
- In computer science,is a data structure that stores a collection of disjoint (non-overlapping) sets. 
-  Equivalently, it stores a partition of a set into disjoint subsets. It provides operations for adding new sets, merging sets (replacing them by their union), and finding a representative member of a set.
- The last operation makes it possible to find out efficiently if any two elements are in the same or different sets.
#### Applications
- Can be used to determine connected components in a graph
#### Time complexity
- A disjoint-set forest implementation in which Find does not update parent pointers, and in which Union does not attempt to control tree heights, can have trees with height O(n). In such a situation, the Find and Union operations require O(n) time.
#### Implementation
- Each node in a disjoint-set forest consists of a pointer and some auxiliary information, either a size or a rank (but not both). The pointers are used to make parent pointer trees, where each node that is not the root of a tree points to its parent.
- To distinguish root nodes from others, their parent pointers have invalid values, such as a circular reference to the node or a sentinel value.
- Each tree represents a set stored in the forest, with the members of the set being the nodes in the tree. Root nodes provide set representatives: Two nodes are in the same set if and only if the roots of the trees containing the nodes are equal.
- Nodes in the forest can be stored in any way convenient to the application, but a common technique is to store them in an array.
