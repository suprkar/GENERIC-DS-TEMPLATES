
# Segment Tree
## What is a segment tree?
- In computer science, a segment tree, also known as a statistic tree, is a tree data structure used for storing information about intervals, or segments.
- It allows querying which of the stored segments contain a given point. It is, in principle, a static structure; that is, it's a structure that cannot be modified once it's built.

#### Applications
- Computational geometry, 
- Geographic information systems 
- Machine learning.
#### Implementation
- T is a binary tree.
- Its leaves correspond to the elementary intervals induced by the endpoints in I, in an ordered way: the leftmost leaf corresponds to the leftmost interval, and so on. 
- The elementary interval corresponding to a leaf v is denoted Int(v).
- The internal nodes of T correspond to intervals that are the union of elementary intervals: the interval Int(N) corresponding to node N is the union of the intervals corresponding to the leaves of the tree rooted at N. That implies that Int(N) is the union of the intervals of its two children.
- Each node or leaf v in T stores the interval Int(v) and a set of intervals, in some data structure. This canonical subset of node v contains the intervals [x, x′] from I such that [x, x′] contains Int(v) and does not contain Int(parent(v)). That is, each node in T stores the segments that span through its interval, but do not span through the interval of its parent.[3]
