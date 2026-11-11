# 03 — Four Mathematical Properties of Friendship in C++ (`[class.friend]`)

1. **Not Symmetric (Not Mutual)**: If `A` declares `B` as a friend, `B` can access `A`'s private members, but `A` **cannot** access `B`'s private members unless `B` also declares `A` as a friend.
2. **Not Transitive**: If `A` is a friend of `B`, and `B` is a friend of `C`, `A` is **not** automatically a friend of `C`.
3. **Not Inherited**: If `Base` is a friend of `X`, `Derived : public Base` is **not** a friend of `X`.
4. **Not Affected by `private:`/`public:` Labels**: Friendship declarations ignore enclosing access specifiers.
