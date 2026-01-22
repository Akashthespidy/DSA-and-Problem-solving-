# set and unordered_set (STL)

`std::set` is typically implemented as a balanced binary search tree (commonly a red‑black tree). It stores unique elements in sorted order and provides guaranteed logarithmic time complexity O(log n) for lookup, insertion, and deletion. Useful operations include ordered traversal, `lower_bound`, `upper_bound`, and predecessor/successor queries. Use `std::set` when you need ordered iteration or strict logarithmic guarantees.

`std::multiset` has the same underlying implementation and complexity as `std::set` but allows duplicate elements. Use it when you need to keep multiple equal elements while maintaining sorted order.

`std::unordered_set` is a hash-table based container that stores unique elements with average constant time complexity O(1) for lookup, insertion, and deletion (worst-case O(n) in case of many hash collisions). It does not preserve order. Keys should be hashable (`std::hash`) and equality-comparable (`operator==`). Use `std::unordered_set` for fast membership tests when element ordering is not required; consider calling `reserve()` or tuning `max_load_factor()` to reduce rehashing.

`std::unordered_multiset` is the unordered equivalent of `std::multiset`, allowing duplicate elements while offering average O(1) operations.

Headers: `#include <set>` and `#include <unordered_set>`

Quick complexity summary:

- `std::set`, `std::multiset`: lookup/insert/erase — O(log n) (guaranteed)
- `std::unordered_set`, `std::unordered_multiset`: lookup/insert/erase — average O(1), worst-case O(n)

When to choose which:

- Use **`std::set`** when you need sorted order, range queries, or deterministic logarithmic time.
- Use **`std::multiset`** when duplicates are required but ordering should be preserved.
- Use **`std::unordered_set`** when you need the fastest average-case membership tests and do not care about order.
- Use **`std::unordered_multiset`** when duplicates are allowed and average-case constant-time performance is important.

Notes and tips:

- `std::unordered_*` containers typically use more memory due to buckets and may have slower iteration compared to ordered sets.
- For order-statistics (k-th element queries) or indexed operations, consider augmented trees (e.g., policy-based data structures) since the standard `std::set` does not provide direct rank queries.
- If using custom key types with `std::unordered_*`, provide `std::hash` specialization and `operator==`.

Example (brief):

```cpp
#include <set>
#include <unordered_set>

std::set<int> s;            // ordered, unique
std::multiset<int> ms;      // ordered, duplicates allowed
std::unordered_set<int> us; // unordered, unique, average O(1)
```

s.find(it) delete one thing if has with erase but delete all when erase(string)
