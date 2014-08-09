For the more experienced reader:
The instructions of the basic and full RISCs defined in this book can be executed with 
at most two register reads and one write. what are some common or plausible RISC 
instructions that either need more source operands or need to do more than one register write?

First thing that came to mind was that a division instruction could result in a 
quotient and remainder needing to be written to two registers. A special instruction that
could do a shift or rotate on the fly could also read the shift amount from a third register
perhaps.
