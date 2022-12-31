#!/bin/bash

pswdgn -l 256 --all > password.txt

# read https://www.howtogeek.com/devops/automate-inputs-to-linux-scripts-with-the-expect-command/
cat << 'EOF' > expectsh.exp
#!/usr/bin/expect -f

set timeout -1

spawn ./register

expect "new username : r"
send -- "rootr"

expect "new password : r"
send -- "$(cat password.txt)"

expect eof
EOF

: '
Which user?
u   user/owner
g   group
o   other
a   all
What to do?
+   add this permission
-   remove this permission
=   set exactly this permission
Which permissions?
r   read
w   write
x   execute
'
chmod ugo+x expectsh.exp


./expectsh.exp







