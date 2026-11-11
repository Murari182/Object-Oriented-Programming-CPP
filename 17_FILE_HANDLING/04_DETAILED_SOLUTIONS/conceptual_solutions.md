# Detailed Solutions — Conceptual Questions (Module 17)
- **Q1 Solution**: `ios::app` forces **every** write operation to occur at the end of the file regardless of `seekp()` calls; `ios::ate` only positions the file pointer at the end upon opening, allowing subsequent `seekp()` calls to modify earlier bytes.
- **Q2 Solution**: `seekg`/`tellg` manipulate/query the input (**get**) position pointer, whereas `seekp`/`tellp` manipulate/query the output (**put**) position pointer.
