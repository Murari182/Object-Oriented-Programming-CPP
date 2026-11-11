# 02 — Master "Difference Between" Tables for Written University Examinations

## 1. Pointer (`int*`) vs. Reference (`int&`)
| Basis | Pointer (`int* p`) | Reference (`int& r`) |
| :--- | :--- | :--- |
| Initialization | Optional at declaration | Mandatory at declaration |
| Rebinding | Can point to a different object later | Cannot be rebound |
| Nullability | Can be `nullptr` | Cannot be null |

## 2. Compile-Time Polymorphism vs. Runtime Polymorphism
| Basis | Compile-Time (Early Binding) | Runtime (Late Binding) |
| :--- | :--- | :--- |
| Mechanism | Function & Operator Overloading, Templates | `virtual` functions via base pointer/reference |
| Resolution Time | Compile time | Runtime via `vptr` and `vtable` |

## 3. Shallow Copy vs. Deep Copy
| Basis | Shallow Copy | Deep Copy |
| :--- | :--- | :--- |
| Pointer Members | Copies only the pointer address (shared heap block) | Allocates a new heap block and copies the data |
| Destructor Safety | Causes Double Free Undefined Behavior | Completely safe |
