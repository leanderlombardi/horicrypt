# horicrypt
Little encryption alg made in C

## How to use?
### Linux
**You need to have make installed, which I assume you already have. If you haven't, here's the command:**
```bash
sudo apt-get install make
```
Now here's how to install `horicrypt`:
1) `cd` to the `horicrypt` directory
2) Execute these commands:
```bash
$ make
gcc -Wall -Wextra -pedantic -O2 horicrypt.c -o horicrypt
$ sudo make install
[sudo] password for yourusername: 
install -d /usr/local/bin
install -m 755 horicrypt /usr/local/bin
```
Now you're ready!
You can use it like this:
```bash
$ horicrypt 22 "Hello, world!"
En/Decrypted message: ^szzy:6aydzr7
```
To decrypt this, just execute it in reverse:
```bash
$ horicrypt 22 "^szzy:6aydzr7"
En/Decrypted message: Hello, world!
```
Btw: That number is the key. If you try to horicrypt a string with a different number, it won't work as expected.
```bash
$ horicrypt 21 "^szzy:6aydzr7"
En/Decrypted message: Kfool/#tlqog"
```
## How to uninstall?
Go back to the directory where you downloaded it (usually `$HOME/Downloads/horicrypt` and execute this command:
```bash
$ sudo make uninstall
[sudo] password for yourusername:
rm -f /usr/local/bin/horicrypt
```
