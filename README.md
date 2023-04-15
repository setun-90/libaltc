# Alternate C standard library
This project presents an alternate hierarchy of alternate function headers for standard tasks in C, designed to increase modularity and reduce bugs.

* env: functions and information relating to the environment, such as IO and platform information *unrelated to types*.
* lang: functions and information pertaining to core language types, as strings and conversions.
* algo: functions not involving interaction with the environment, such as mathematical functions and data structures.

## Format
* include - header file hierarchy.
* src/test - test program source hierarchy.
* src/impl - Put your implementation here.
