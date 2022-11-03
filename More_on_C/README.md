# Learning more in C programing

## Simple bash scripts to start with are

#### 1. A script that runs C file through a preprocessor and save the result in another file 
``` \#!/bin/bash
    gcc $CFILE -E -o c
```
#### 2. A script that generates the assembly code of a C code and save it in an output file
``` #!/bin/bash 
    gcc -c $CFILE
```

#### 3. A script that generates the assembly code of a C code and save it in an output file.
``` #!/bin/bash
    gcc -S $CFILE
```

