# map and unordered_map (STL)

`std::map` is typically implemented as a balanced binary search tree (commonly a red‑black tree). It stores key–value pairs sorted by key and provides guaranteed logarithmic time complexity O(log n) for lookup, insertion, and deletion. Keys must be comparable (by `operator<` by default) and elements are unique.

`std::unordered_map` is a hash-table based associative container that stores key–value pairs with average constant time complexity O(1) for lookup, insertion, and deletion (worst-case linear). It does not preserve element order. Keys must be hashable (via `std::hash`) and equality-comparable (`operator==`).

Include the headers `#include <map>` and `#include <unordered_map>`.

Choose `std::map` when you require ordered traversal or strict logarithmic guarantees; choose `std::unordered_map` for faster average-case lookups when ordering is not required.

#pair can be used in map but not unorder map , also in map string , string time complexity is n\*logn. where n is the size of the string.
