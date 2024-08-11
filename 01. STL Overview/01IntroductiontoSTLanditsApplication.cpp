#include <bits/stdc++.h>
using namespace std;


// Ek sample program for demonstration 

int main() {
    // Vector initialization
    vector<int> vec = {10, 20, 30, 40, 50};

    // Display the original vector
    cout << "Original Vector: ";
    for (int x : vec)
        cout << x << " ";
    cout << endl;

    // Using auto iterator to traverse the vector
    cout << "Using Iterator to Traverse: ";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Using auto reverse iterator to traverse the vector in reverse order
    cout << "Using Reverse Iterator: ";
    for (auto rit = vec.rbegin(); rit != vec.rend(); ++rit)
        cout << *rit << " ";
    cout << endl;

    // Finding an element in the vector using find algorithm
    auto it = find(vec.begin(), vec.end(), 30);
    if (it != vec.end())
        cout << "Element 30 found at position: " << distance(vec.begin(), it) << endl;
    else
        cout << "Element 30 not found" << endl;

    // Sorting the vector in descending order using sort algorithm
    sort(vec.begin(), vec.end(), greater<int>());
    cout << "Vector after sorting in descending order: ";
    for (int x : vec)
        cout << x << " ";
    cout << endl;

    // Reversing the vector using reverse algorithm
    reverse(vec.begin(), vec.end());
    cout << "Vector after reversing: ";
    for (int x : vec)
        cout << x << " ";
    cout << endl;

    // Calculating the sum of all elements using accumulate algorithm
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "Sum of all elements in the vector: " << sum << endl;

    return 0;
}

/*
C++ Standard Template Library (STL) ke baare mein notes:

C++ STL ek powerful library hai jo commonly used data structures aur algorithms provide karti hai. Ye library code ko concise, efficient aur reusable banati hai. STL ke 4 major components hain: Containers, Algorithms, Iterators, aur Functors. Har ek component ka apna unique purpose hai jo coding ko simplify karta hai.

1. **Containers:**
   Containers wo objects hain jo data ko store karte hain. STL mein kuch popular containers hain:
   
   - **Vector:** Dynamic array jisme elements ko easily add ya remove kiya ja sakta hai. `vector<int> v;`
   - **List:** Doubly linked list jisme fast insertion aur deletion hota hai. `list<int> l;`
   - **Deque:** Double-ended queue jisme dono ends se insertion aur deletion fast hota hai. `deque<int> d;`
   - **Set:** Sorted, unique elements ka collection. `set<int> s;`
   - **Map:** Key-value pairs ka sorted collection. `map<int, string> m;`
   - **Stack:** LIFO (Last In First Out) data structure. `stack<int> s;`
   - **Queue:** FIFO (First In First Out) data structure. `queue<int> q;`

2. **Algorithms:**
   Algorithms STL ka wo part hain jo searching, sorting, aur other operations perform karte hain. Ye inbuilt functions efficiently data ko manipulate karte hain:
   
   - **sort():** Kisi container ko sort karta hai. `sort(v.begin(), v.end());`
   - **find():** Specific element ko find karta hai. `find(v.begin(), v.end(), value);`
   - **binary_search():** Sorted array mein binary search perform karta hai. `binary_search(v.begin(), v.end(), value);`
   - **reverse():** Container ke elements ko reverse karta hai. `reverse(v.begin(), v.end());`
   - **accumulate():** Sum of elements ko return karta hai. `accumulate(v.begin(), v.end(), 0);`

3. **Iterators:**
   Iterators pointers ki tarah behave karte hain jo containers ke elements par traverse karte hain. STL mein kuch common iterators hain:
   
   - **begin():** Container ke first element ka pointer return karta hai. `auto it = v.begin();`
   - **end():** Container ke last element ke next position ka pointer return karta hai. `auto it = v.end();`
   - **advance():** Iterator ko aage move karta hai. `advance(it, n);`
   - **next(), prev():** Next aur previous elements ko access karne ke liye use hota hai. `auto it2 = next(it, n);`

4. **Functors:**
   Functors ya function objects wo objects hote hain jo operator() ko overload karte hain. Ye commonly algorithms ke saath use hote hain custom operations perform karne ke liye.
   
   - **Example:** Custom sort order ke liye. `struct Compare { bool operator()(int a, int b) { return a > b; } };`

5. **Applications of STL:**
   STL ka use karke complex data structures ko efficiently implement kiya ja sakta hai, jaise:
   
   - **Competitive Programming:** Fast input-output aur efficient data handling ke liye STL ka use hota hai.
   - **Real-time Systems:** STL ke optimized containers aur algorithms ko use karke response time reduce kiya ja sakta hai.
   - **Game Development:** STL ke data structures game states, objects aur resources manage karne mein help karte hain.
   - **Web Servers:** Fast data lookup aur caching ke liye STL containers jaise `map` aur `unordered_map` ka use hota hai.

Overall, C++ STL ek comprehensive toolkit hai jo development process ko faster aur error-prone banati hai. STL ko efficiently use karna seekhne se aap apne code ko not just faster but also more maintainable bana sakte hain.
*/
