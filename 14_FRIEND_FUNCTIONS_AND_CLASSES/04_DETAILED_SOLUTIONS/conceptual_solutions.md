# Detailed Solutions — Conceptual Questions (Module 14)
- **Q1 Solution**: Friendship is an explicit per-class grant (`[class.friend]`). `A` trusting `B` does not mean `B` trusts `A` (non-symmetric), nor does `A` trust `B`'s friends (non-transitive) or `B`'s derived classes (non-inherited).
- **Q2 Solution**: Controlled friendship (such as `operator<<` or binary operators bridging two classes) avoids adding public getters/setters that would expose internal representation to the entire program.
