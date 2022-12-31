# pswdgn

 **_pswdgn_** is a tool for generate password, public / private key, and other credentials.
 
 <hr>
 
# USAGE
 
## Installation

```
using g++ :
    $ g++ pswdgn.cpp -o pswdgn

using gcc :
    $ gcc pswdgn.cpp -o pswdgn -lstdc++

using clang :
    $ clang pswdgn.cpp -o pswdgn -lstdc++

using clang++ :
    $ clang++ pswdgn.cpp -o pswdgn
```
 
## how to use

```
docs :
   pswdgn [ -L | --length ] [NUMBER] [ -ON | --only-number ]

example :
   $ pswdgn -l 256 --all > password.txt
```