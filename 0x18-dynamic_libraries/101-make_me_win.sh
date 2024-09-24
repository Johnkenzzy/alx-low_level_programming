#!/bin/bash
echo -ne '#include <stdio.h>\n#include <stdlib.h>\n\nint rand() {\nstatic int i = 0;\nint nums[] = {9, 8, 10, 24, 75, 9};\nreturn nums[i++ % 6];\n}\n' > /tmp/win.c
gcc -shared -o /tmp/win.so -fPIC /tmp/win.c

