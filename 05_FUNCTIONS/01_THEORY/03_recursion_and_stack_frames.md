# 03 — Recursion and Call Stack Frames

Every recursive function call pushes a new activation record (stack frame) onto the call stack containing its own local variables and return address. Every recursive function **must** have a **base case** that terminates recursion; otherwise, infinite recursion exhausts stack memory (Stack Overflow).
