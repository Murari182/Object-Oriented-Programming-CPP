# 02 — Bridging Two Classes and `friend class`

## 1. Forward Declaration When Bridging Two Classes
To write a single `friend` function `add_incomes(const teacher&, const researcher&)` that accesses `private` members of two different classes, forward-declare the second class (`class researcher;`) before defining the first class (`class teacher`).

## 2. `friend class`
Declaring `friend class B;` inside `class A` grants **every member function of `B`** access to `A`'s `private` and `protected` members.
