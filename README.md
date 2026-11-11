# C++ Complete Study & Reference Library (C++23)

Welcome to the **C++ Complete Reference Library** (`CPP_COMPLETE_REFERENCE_LIBRARY/`), a comprehensive, self-contained, offline educational repository designed specifically for **B.Tech Mathematics and Computing** coursework, university theory examinations, laboratory practicals, and technical viva preparation.

---

## 1. Repository Philosophy & Pedagogical Approach

This library bridges **classroom simplicity** and **modern C++23 technical accuracy**:

1. **Classroom-First Coding Style**:
   - Every concept is introduced using clean, readable, exam-friendly classes and functions (`person`, `student`, `super`, `sub`, `complex_system`, `employee`) with direct object creation inside `main()`.
   - One major concept is demonstrated per program without unnecessary boilerplate, complex abstractions, or unrelated STL machinery.
2. **Exact C++ Standard Rules (C++23 Primary Target)**:
   - Explanations clearly distinguish between **compile-time rules** (ill-formed programs), **runtime errors** (exceptions, termination), **undefined behavior (UB)**, **unspecified behavior**, and **implementation-defined behavior**.
   - Every `.cpp` source file begins with a structured classification header (**Category A** through **Category G**).
   - Programs demonstrating intentional compile-time errors use the suffix `_compile_error.cpp` and begin with `// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION` on line 1, paired with a separate corrected `.cpp` file.
3. **Visual Memory Models**:
   - Every topic includes technical `.svg` diagrams illustrating stack frames, heap allocations, pointer arithmetic transitions, vtable/vptr layouts, inheritance access transformations, and stack unwinding.

---

## 2. Complete Directory Navigation

| Folder | Module Name | Focus Area |
| :--- | :--- | :--- |
| [`00_MASTER_INDEX/`](./00_MASTER_INDEX/README.md) | Master Index & Coverage | Syllabus roadmap, classroom notes tracker, and master references |
| [`01_CPP_FUNDAMENTALS/`](./01_CPP_FUNDAMENTALS/README.md) | C++ Fundamentals | Compilation pipeline, `main()`, I/O streams, namespaces, structure of a C++ program |
| [`02_DATA_TYPES_AND_VARIABLES/`](./02_DATA_TYPES_AND_VARIABLES/README.md) | Data Types & Variables | Fundamental types, sizes, signed/unsigned representation, initialization (`int x{}`), `const`, `constexpr`, `auto` |
| [`03_OPERATORS_AND_EXPRESSIONS/`](./03_OPERATORS_AND_EXPRESSIONS/README.md) | Operators & Expressions | Precedence vs. associativity vs. evaluation order, sequencing rules, bitwise, logical short-circuiting, signed overflow UB |
| [`04_CONTROL_FLOW/`](./04_CONTROL_FLOW/README.md) | Control Flow | `if-else`, `switch`, `for`, range-based `for`, `while`, `do-while`, `break`, `continue`, loop invariants |
| [`05_FUNCTIONS/`](./05_FUNCTIONS/README.md) | Functions | Call by value, call by address, call by reference, default arguments, inline functions, function overloading, recursion |
| [`06_POINTERS_AND_REFERENCES/`](./06_POINTERS_AND_REFERENCES/README.md) | **Pointers & References (Priority Deep-Dive)** | Address-of `&`, dereference `*`, 13 pointer expressions (`*p++`, `(*p)++`, `++*p`, `*++p`, etc.), `const` pointers, void pointers, references, smart pointers, 30+ graded questions |
| [`07_ARRAYS_AND_STRINGS/`](./07_ARRAYS_AND_STRINGS/README.md) | Arrays & Strings | 1D/2D arrays, array-to-pointer decay, C-style null-terminated strings vs. `std::string` |
| [`08_DYNAMIC_MEMORY_ALLOCATION/`](./08_DYNAMIC_MEMORY_ALLOCATION/README.md) | Dynamic Memory Allocation | Stack vs. heap, `new`/`delete`, `new[]`/`delete[]`, memory leaks, dangling/wild pointers, double deletion, RAII & smart pointers |
| [`09_CLASSES_AND_OBJECTS/`](./09_CLASSES_AND_OBJECTS/README.md) | Classes & Objects | Encapsulation, `private`/`protected`/`public`, `this` pointer, `const` member functions, `static` data & functions, array of objects |
| [`10_INHERITANCE/`](./10_INHERITANCE/README.md) | **Inheritance (Priority Deep-Dive)** | `public`/`protected`/`private` inheritance modes, classroom `super`/`sub` and `person`/`student` access analysis, single/multilevel/multiple/hierarchical/hybrid, diamond problem & `virtual` base classes |
| [`11_POLYMORPHISM/`](./11_POLYMORPHISM/README.md) | Polymorphism | Compile-time vs. runtime polymorphism, function overriding vs. function hiding, upcasting, object slicing |
| [`12_OPERATOR_OVERLOADING/`](./12_OPERATOR_OVERLOADING/README.md) | **Operator Overloading (Priority Deep-Dive)** | Unary & binary overloads, member vs. friend functions, classroom `complex_system` (`Show_Num()`, `operator+()`), stream `<<`/`>>`, signed overflow edge cases |
| [`13_CONSTRUCTORS_AND_DESTRUCTORS/`](./13_CONSTRUCTORS_AND_DESTRUCTORS/README.md) | Constructors & Destructors | Default, parameterized, copy, and move constructors, member initializer lists, shallow vs. deep copy, Rule of Three/Five/Zero, invocation order |
| [`14_FRIEND_FUNCTIONS_AND_CLASSES/`](./14_FRIEND_FUNCTIONS_AND_CLASSES/README.md) | Friend Functions & Classes | Non-member `friend` functions, bridging two classes, `friend class`, encapsulation trade-offs |
| [`15_VIRTUAL_FUNCTIONS_AND_ABSTRACTION/`](./15_VIRTUAL_FUNCTIONS_AND_ABSTRACTION/README.md) | Virtual Functions & Abstraction | `virtual`, `override`, `final`, pure virtual functions (`= 0`), abstract classes, `vtable` & `vptr` mechanics, virtual destructors |
| [`16_EXCEPTION_HANDLING/`](./16_EXCEPTION_HANDLING/README.md) | **Exception Handling (Priority Deep-Dive)** | `try`, `throw`, `catch`, stack unwinding, rethrowing (`throw;`), standard & custom exceptions, RAII, basic/strong/no-throw (`noexcept`) guarantees |
| [`17_FILE_HANDLING/`](./17_FILE_HANDLING/README.md) | File Handling | `ifstream`, `ofstream`, `fstream`, text vs. binary modes, file pointers (`seekg`, `seekp`, `tellg`, `tellp`), stream state flags |
| [`18_TEMPLATES/`](./18_TEMPLATES/README.md) | Templates | Function templates, class templates, multiple type parameters, template specialization, C++20/23 brief intro to `concepts` |
| [`19_NAMESPACES_AND_PREPROCESSOR/`](./19_NAMESPACES_AND_PREPROCESSOR/README.md) | Namespaces & Preprocessor | `namespace` declarations, `using` directives vs. declarations, macros (`#define`) vs. `constexpr`/`inline`, include guards |
| [`20_TYPE_CONVERSION_AND_CASTING/`](./20_TYPE_CONVERSION_AND_CASTING/README.md) | Type Conversion & Casting | Implicit promotions, converting constructors (`explicit`), conversion operators, `static_cast`, `dynamic_cast`, `const_cast`, `reinterpret_cast` |
| [`21_STL_AND_MODERN_CPP/`](./21_STL_AND_MODERN_CPP/README.md) | STL & Modern C++ | `std::vector`, `std::array`, `std::map`, `std::set`, iterators, `<algorithm>` (`sort`, `find`), `auto`, structured bindings |
| [`22_PROGRAMMING_PRACTICE/`](./22_PROGRAMMING_PRACTICE/README.md) | Programming Practice | Mathematical computing problems, matrix operations, polynomial representation, number theory, and OOP modeling exercises |
| [`23_LAB_PROGRAMS/`](./23_LAB_PROGRAMS/README.md) | Lab Programs | Complete university laboratory practical programs with aim, algorithm, source code, dry run, and sample I/O |
| [`24_THEORY_AND_VIVA_QUESTIONS/`](./24_THEORY_AND_VIVA_QUESTIONS/README.md) | Theory & Viva Questions | Comprehensive viva-voce question bank, comparison tables, rapid oral answers, and university examination paper patterns |
| [`25_REVISION_NOTES/`](./25_REVISION_NOTES/README.md) | Revision Notes | Last-minute cheat sheets, operator precedence table, access-specifier matrix, memory safety checklist, and common pitfalls |

---

## 3. Program Classification System

Every `.cpp` file in this repository carries an explicit classification tag in its top comment block:

- **Category A — Valid and well-defined program**: Compiles cleanly under C++23 (`-std=c++23 -Wall -Wextra -Wpedantic`) and produces deterministic output.
- **Category B — Intentional compilation-error demonstration**: Named `*_compile_error.cpp` with `// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION` on Line 1. Demonstrates a violated language rule (such as private/protected access violation or `const` mutation) and is always paired with a separate corrected Category A program.
- **Category C — Runtime-error demonstration**: Compiles cleanly, but demonstrates a runtime failure condition (such as uncaught exceptions or failed dynamic allocation).
- **Category D — Undefined-behavior demonstration**: Compiles, but violates a semantic rule of the C++ standard (e.g., unsequenced modifications like `*p++ + *p++`, signed integer overflow, dangling pointer dereference, or double `delete`). No fabricated "guaranteed" output is ever claimed.
- **Category E — Ill-formed program**: Violates syntax or semantic constraints requiring a diagnostic from a conforming implementation.
- **Category F — Incomplete code fragment**: Illustrative snippet not intended as a standalone translation unit.
- **Category G — Unspecified or implementation-defined behavior**: Behavior that varies across platforms/compilers (such as `sizeof(int)`, pointer address values, or argument evaluation order in certain expressions).

---

## 4. How to Compile Programs Offline

When working on a local machine with GCC (13+) or Clang (16+):

```bash
# Compile a Category A valid program using C++23:
g++ -std=c++23 -Wall -Wextra -Wpedantic 01_basic_example.cpp -o 01_basic_example
./01_basic_example

# If using an older compiler supporting C++20 or C++17:
g++ -std=c++20 -Wall -Wextra -Wpedantic 01_basic_example.cpp -o 01_basic_example

# Verify that a Category B program fails compilation as expected:
g++ -std=c++23 -fsyntax-only 02_access_violation_compile_error.cpp
```

---

## 5. Recommended Study Sequence

1. **Foundation Phase**: Start with `01_CPP_FUNDAMENTALS` through `05_FUNCTIONS` to master types, expressions, evaluation order, and function call mechanics.
2. **Memory & Indirection Phase**: Study `06_POINTERS_AND_REFERENCES`, `07_ARRAYS_AND_STRINGS`, and `08_DYNAMIC_MEMORY_ALLOCATION` together. Walk through every SVG memory diagram and dry-run table before attempting the 30+ graded pointer problems.
3. **Core Object-Oriented Phase**: Master `09_CLASSES_AND_OBJECTS`, `13_CONSTRUCTORS_AND_DESTRUCTORS`, `14_FRIEND_FUNCTIONS_AND_CLASSES`, and `12_OPERATOR_OVERLOADING`.
4. **Hierarchy & Runtime Dispatch Phase**: Study `10_INHERITANCE`, `11_POLYMORPHISM`, and `15_VIRTUAL_FUNCTIONS_AND_ABSTRACTION`. Pay close attention to the classroom `protected` inheritance examples.
5. **Robustness & Generic Programming Phase**: Complete `16_EXCEPTION_HANDLING`, `17_FILE_HANDLING`, `18_TEMPLATES`, `19_NAMESPACES_AND_PREPROCESSOR`, `20_TYPE_CONVERSION_AND_CASTING`, and `21_STL_AND_MODERN_CPP`.
6. **Exam & Lab Mastery Phase**: Practice with `22_PROGRAMMING_PRACTICE`, `23_LAB_PROGRAMS`, `24_THEORY_AND_VIVA_QUESTIONS`, and `25_REVISION_NOTES`.
