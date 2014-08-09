express the loop:
```c
for (e1; e2; e3) statement
```
in terms of a while loop. Can it be expressed as a Do loop?

While loop:
```c
i = e1;
while (i < e2) {
    statement;
    i = e3;
}
```

The Do while loop only works if we know the loop will evaluate at least one time.
